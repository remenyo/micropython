import gc
import uos
from esp32 import Partition
from flashbdev import bdev

if mapfs := Partition.find(Partition.TYPE_DATA, label="mapfs"):
    uos.mount(uos.VfsMap(mapfs[0].mmap(), mapfs[0]), "/mapfs")
del mapfs

try:
    if bdev:
        uos.mount(bdev, "/")
except OSError:
    import inisetup

    vfs = inisetup.setup()

gc.collect()
