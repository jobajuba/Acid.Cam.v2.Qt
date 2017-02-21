#ifndef __MAIN_WINDOW_H__
#define __MAIN_WINDOW_H__

#include "qtheaders.h"
#include "new_dialog.h"
#include "display_window.h"
#include "playback_thread.h"

enum VideoMode { MODE_CAMERA = 0, MODE_VIDEO };

class AC_MainWindow : public QMainWindow {
    Q_OBJECT
public:
    AC_MainWindow(QWidget *parent = 0);
    ~AC_MainWindow();
    void Log(const QString &s);
    bool startCamera(int res, int dev, const QString &outdir, bool record, int type);
    bool startVideo(const QString &filename, const QString &outdir, bool record, int type);
    QListWidget *filters, *custom_filters;
    QPushButton *btn_add, *btn_remove, *btn_moveup, *btn_movedown;
    QTextEdit *log_text;
    QCheckBox *chk_negate;
    QComboBox *combo_rgb;
    QProgressBar *progress_bar;
    QMenu *file_menu, *controls_menu, *help_menu;
    QAction *file_exit, *file_new_capture, *file_new_video;
    QAction *controls_snapshot, *controls_pause, *controls_step, *controls_stop, *controls_setimage, *controls_showvideo;
    QAction *help_about;
public slots:
    void addClicked();
    void rmvClicked();
    void upClicked();
    void downClicked();
    void file_Exit();
    void file_NewVideo();
    void file_NewCamera();
    void controls_Stop();
    void controls_Snap();
    void controls_Pause();
    void controls_Step();
    void controls_SetImage();
    void controls_ShowVideo();
    void help_About();
    void updateFrame(QImage img);
    void stopRecording();
    void chk_Clicked();
    void cb_SetIndex(int index);
    void frameInc();
private:
    void createControls();
    void createMenu();
    DisplayWindow *disp;
    CaptureCamera *cap_camera;
    CaptureVideo *cap_video;
    cv::VideoCapture capture_camera, capture_video;
    cv::VideoWriter writer;
    unsigned long video_frames;
    double video_fps;
    bool paused, recording, step_frame;
    QString video_file_name;
    QString output_directory;
    bool take_snapshot;
    unsigned long file_pos, frame_index;
    Playback *playback;
    VideoMode programMode;
    void buildVector(std::vector<std::pair<int,int>> &v);
};

extern const char *filer_names[];
extern std::unordered_map<std::string, std::pair<int, int>> filter_map;
void generate_map();

#endif
