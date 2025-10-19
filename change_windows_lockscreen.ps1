# /blog/2025/10/19/change-windows-lockscreen

# Powershell code to change the LockScreen on Windows 10
# needs Admin rights

$imgPath = "C:\Users\schueler\Downloads\WhatsApp Bild 2025-10-17 um 13.03.03_78d12b26.jpg"
$code = @"
using System.Runtime.InteropServices;

public class LockScreen {
    [DllImport("user32.dll", SetLastError = true)]
    public static extern bool SystemParametersInfo(int uAction, int uParam, string lpvParam, int fuWinIni);
}
"@

Add-Type $code

$RegPath = "HKLM:\SOFTWARE\Microsoft\Windows\CurrentVersion\PersonalizationCSP"
New-Item -Path $RegPath -Force | Out-Null
Set-ItemProperty -Path $RegPath -Name "LockScreenImagePath" -Value $imgPath
