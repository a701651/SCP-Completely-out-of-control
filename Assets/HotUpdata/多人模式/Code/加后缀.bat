@echo off
chcp 65001 >nul
setlocal enabledelayedexpansion

rem 目标目录，改成你的路径；. 表示 bat 所在目录
set "ROOT=."

rem 递归处理所有子目录里的 dll
for /r "%ROOT%" %%f in (*.dll) do (
    ren "%%f" "%%~nxf.bytes"
)

echo 全部处理完成
pause