# Demo kernel module

On x64, run `make` or

```shell
KERNEL_VERSION=$(uname -r) make ARCH=x86_64 CROSS_COMPILE=
```

Not x64, run

```shell
KERNEL_VERSION=your-arm64-kernel-version make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu-
```
