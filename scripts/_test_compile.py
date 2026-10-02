import subprocess, glob, os, sys

root = os.getcwd()
env = dict(os.environ)
env['INCLUDE'] = os.path.join(root, 'tools', 'vc9tree', 'include') + ';' + \
                 os.path.join(root, 'tools', 'sdktree', 'include') + ';' + \
                 os.path.join(root, 'tools', 'dxsdk', 'DXSDK', 'Include')
env['DIRECTINPUT_VERSION'] = '0x0800'
cl = os.path.join(root, 'tools', 'vc9tree', 'bin', 'cl.exe')

f = glob.glob(os.path.join('decomp_out', 'FUN_00401000*.c'))[0]
p = subprocess.run([cl, '/nologo', '/c', '/MT', '/EHsc', '/GS-', '/O2',
                    '/I' + os.path.join(root, 'src'), '/Fo' + os.path.join(root, 'build') + os.sep,
                    f],
                   capture_output=True, text=True, errors='replace')
print('rc', p.returncode)
print('--- STDOUT ---')
print(p.stdout[:1500])
print('--- STDERR ---')
print(p.stderr[:3000])