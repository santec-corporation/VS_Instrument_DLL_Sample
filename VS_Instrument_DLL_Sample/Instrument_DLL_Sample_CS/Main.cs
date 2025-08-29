using System;
using System.Drawing;
using System.Windows.Forms;

namespace Instrument_DLL_Sample
{
    public partial class Main : Form
    {
        public Main()
        {
            InitializeComponent();
        }
        /// <summary>
        /// 载入子窗体
        /// </summary>
        /// <typeparam name="T">子窗体类型</typeparam>
        /// <param name="singleton">是否只允许打开一个当前类型子窗体</param>
        /// <param name="size">子窗体</param>
        /// <param name="location">开始位置</param>
        /// <param name="onload">载入事件</param>
        private void LoadSubForm<T>(bool singleton, Size size, Point location, EventHandler onload = null) where T : Form, new()
        {
            LoadSubForm(typeof(T), singleton, size, location, onload);
        }

        /// <summary>
        /// 载入子窗体
        /// </summary>
        /// <param name="type">子窗体类型</param>
        /// <param name="singleton">是否只允许打开一个当前类型子窗体</param>
        /// <param name="size">子窗体</param>
        /// <param name="location">开始位置</param>
        /// <param name="onload">载入事件</param>
        private void LoadSubForm(Type type, bool singleton, Size size, Point location, EventHandler onload = null)
        {
            this.Cursor = Cursors.WaitCursor;

            var form = Activator.CreateInstance(type) as Form;
            if (form == null)
            {
                this.Cursor = Cursors.Default;
                return;
            }

            if (size.Width == int.MaxValue || size.Height == int.MaxValue)
                form.WindowState = FormWindowState.Maximized;
            else if (size.Width == int.MinValue || size.Height == int.MinValue)
                form.WindowState = FormWindowState.Minimized;
            else if (!size.IsEmpty)
                form.Size = size;

            if (location.IsEmpty)
                form.StartPosition = FormStartPosition.CenterScreen;
            else
                form.Location = location;

            OpenForm(form, onload);

            this.Cursor = Cursors.Default;
        }

        /// <summary>
        /// 打开子窗体
        /// </summary>
        /// <param name="form">子窗体</param>
        /// <param name="onload">载入事件</param>
        private void OpenForm(Form form, EventHandler onload)
        {
            if (onload != null)
                form.Load += new EventHandler(onload);

            if (this.IsMdiContainer)
            {
                form.MdiParent = this;
                form.Icon = this.Icon;
                form.Show();
                form.Activate();
            }
            else
            {
                form.Icon = this.Icon;
                form.Show(this);
                form.Activate();
            }
        }

        private void btnTSL_Click(object sender, EventArgs e)
        {
            LoadSubForm<TSLSample>(true, Size.Empty, Point.Empty);

        }

        private void btnPCU_Click(object sender, EventArgs e)
        {
            LoadSubForm<PCUSample>(true, Size.Empty, Point.Empty);
        }

        private void btnMPM_Click(object sender, EventArgs e)
        {
            LoadSubForm<MPMSample>(true, Size.Empty, Point.Empty);
        }

        private void btnOSU_Click(object sender, EventArgs e)
        {
            LoadSubForm<OSUSample>(true, Size.Empty, Point.Empty);
        }
    }
}
