Public Class Main
    ''' <summary>
    ''' 载入子窗体
    ''' </summary>
    ''' <typeparam name="T">子窗体类型</typeparam>
    ''' <param name="singleton">是否只允许打开一个当前类型子窗体</param>
    ''' <param name="size">子窗体</param>
    ''' <param name="location">开始位置</param>
    ''' <param name="onload">载入事件</param>
    Private Sub LoadSubForm(Of T As {Form, New})(ByVal singleton As Boolean, ByVal size As Size, ByVal location As Point, ByVal Optional onload As EventHandler = Nothing)
        LoadSubForm(GetType(T), singleton, size, location, onload)
    End Sub
    ''' <summary>
    ''' 载入子窗体
    ''' </summary>
    ''' <param name="type">子窗体类型</param>
    ''' <param name="singleton">是否只允许打开一个当前类型子窗体</param>
    ''' <param name="size">子窗体</param>
    ''' <param name="location">开始位置</param>
    ''' <param name="onload">载入事件</param>
    Private Sub LoadSubForm(ByVal type As Type, ByVal singleton As Boolean, ByVal size As Size, ByVal location As Point, ByVal Optional onload As EventHandler = Nothing)
        Me.Cursor = Cursors.WaitCursor
        Dim form = TryCast(Activator.CreateInstance(type), Form)

        If form Is Nothing Then
            Me.Cursor = Cursors.[Default]
            Return
        End If

        If size.Width = Integer.MaxValue OrElse size.Height = Integer.MaxValue Then
            form.WindowState = FormWindowState.Maximized
        ElseIf size.Width = Integer.MinValue OrElse size.Height = Integer.MinValue Then
            form.WindowState = FormWindowState.Minimized
        ElseIf Not size.IsEmpty Then
            form.Size = size
        End If

        If location.IsEmpty Then
            form.StartPosition = FormStartPosition.CenterScreen
        Else
            form.Location = location
        End If

        OpenForm(form, onload)
        Me.Cursor = Cursors.[Default]
    End Sub
    ''' <summary>
    ''' 打开子窗体
    ''' </summary>
    ''' <param name="form">子窗体</param>
    ''' <param name="onload">载入事件</param>
    Private Sub OpenForm(ByVal form As Form, ByVal onload As EventHandler)

        If Me.IsMdiContainer Then
            form.MdiParent = Me
            form.Icon = Me.Icon
            form.Show()
            form.Activate()
        Else
            form.Icon = Me.Icon
            form.Show(Me)
            form.Activate()
        End If
    End Sub

    Private Sub btnTSL_Click(sender As Object, e As EventArgs) Handles btnTSL.Click
        LoadSubForm(Of TSLSample)(True, Size.Empty, Point.Empty)
    End Sub

    Private Sub btnPCU_Click(sender As Object, e As EventArgs) Handles btnPCU.Click
        LoadSubForm(Of PCUSample)(True, Size.Empty, Point.Empty)
    End Sub

    Private Sub btnMPM_Click(sender As Object, e As EventArgs) Handles btnMPM.Click
        LoadSubForm(Of MPMSample)(True, Size.Empty, Point.Empty)
    End Sub

    Private Sub btnOSU_Click(sender As Object, e As EventArgs) Handles btnOSU.Click
        LoadSubForm(Of OSUSample)(True, Size.Empty, Point.Empty)
    End Sub
End Class
