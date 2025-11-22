' Shadowdara MIT 2025
'
' Simple Reminder Message with a Timer
'
' More Infos:
' https://shadowdara.github.io/blog/2025/11/22/reminder-script

timeSec = InputBox("In how many Seconds do you want to be remembered?", "Timer")

msg = InputBox("Message for the Reminder", "Remindertext")

If IsNumeric(timeSec) And timeSec > 0 Then
    WScript.Sleep timeSec * 1000
    MsgBox "Time is over" & vbCrLf & vbCrLf & msg, 64, "Reminder"
Else
    MsgBox "Please Enter a Valid Number.", 48, "Error"
End If
