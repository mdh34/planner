/* MainWindow.c generated by valac 0.36.12, the Vala compiler
 * generated from MainWindow.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <granite.h>
#include <glib/gi18n-lib.h>


#define PLANNER_TYPE_MAIN_WINDOW (planner_main_window_get_type ())
#define PLANNER_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_MAIN_WINDOW, PlannerMainWindow))
#define PLANNER_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_MAIN_WINDOW, PlannerMainWindowClass))
#define PLANNER_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_MAIN_WINDOW))
#define PLANNER_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_MAIN_WINDOW))
#define PLANNER_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_MAIN_WINDOW, PlannerMainWindowClass))

typedef struct _PlannerMainWindow PlannerMainWindow;
typedef struct _PlannerMainWindowClass PlannerMainWindowClass;
typedef struct _PlannerMainWindowPrivate PlannerMainWindowPrivate;

#define PLANNER_TYPE_SQLITE_DATABASE (planner_sqlite_database_get_type ())
#define PLANNER_SQLITE_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_SQLITE_DATABASE, PlannerSqliteDatabase))
#define PLANNER_SQLITE_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_SQLITE_DATABASE, PlannerSqliteDatabaseClass))
#define PLANNER_IS_SQLITE_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_SQLITE_DATABASE))
#define PLANNER_IS_SQLITE_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_SQLITE_DATABASE))
#define PLANNER_SQLITE_DATABASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_SQLITE_DATABASE, PlannerSqliteDatabaseClass))

typedef struct _PlannerSqliteDatabase PlannerSqliteDatabase;
typedef struct _PlannerSqliteDatabaseClass PlannerSqliteDatabaseClass;

#define PLANNER_TYPE_APP_SETTINGS (planner_app_settings_get_type ())
#define PLANNER_APP_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_APP_SETTINGS, PlannerAppSettings))
#define PLANNER_APP_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_APP_SETTINGS, PlannerAppSettingsClass))
#define PLANNER_IS_APP_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_APP_SETTINGS))
#define PLANNER_IS_APP_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_APP_SETTINGS))
#define PLANNER_APP_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_APP_SETTINGS, PlannerAppSettingsClass))

typedef struct _PlannerAppSettings PlannerAppSettings;
typedef struct _PlannerAppSettingsClass PlannerAppSettingsClass;

#define PLANNER_TYPE_HEADERBAR (planner_headerbar_get_type ())
#define PLANNER_HEADERBAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_HEADERBAR, PlannerHeaderbar))
#define PLANNER_HEADERBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_HEADERBAR, PlannerHeaderbarClass))
#define PLANNER_IS_HEADERBAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_HEADERBAR))
#define PLANNER_IS_HEADERBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_HEADERBAR))
#define PLANNER_HEADERBAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_HEADERBAR, PlannerHeaderbarClass))

typedef struct _PlannerHeaderbar PlannerHeaderbar;
typedef struct _PlannerHeaderbarClass PlannerHeaderbarClass;

#define PLANNER_TYPE_WELCOME_VIEW (planner_welcome_view_get_type ())
#define PLANNER_WELCOME_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_WELCOME_VIEW, PlannerWelcomeView))
#define PLANNER_WELCOME_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_WELCOME_VIEW, PlannerWelcomeViewClass))
#define PLANNER_IS_WELCOME_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_WELCOME_VIEW))
#define PLANNER_IS_WELCOME_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_WELCOME_VIEW))
#define PLANNER_WELCOME_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_WELCOME_VIEW, PlannerWelcomeViewClass))

typedef struct _PlannerWelcomeView PlannerWelcomeView;
typedef struct _PlannerWelcomeViewClass PlannerWelcomeViewClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _PlannerMainWindow {
	GtkWindow parent_instance;
	PlannerMainWindowPrivate * priv;
	PlannerSqliteDatabase* db;
};

struct _PlannerMainWindowClass {
	GtkWindowClass parent_class;
};

struct _PlannerMainWindowPrivate {
	PlannerAppSettings* settings;
	PlannerHeaderbar* headerbar;
	PlannerWelcomeView* welcome;
};


static gpointer planner_main_window_parent_class = NULL;

GType planner_main_window_get_type (void) G_GNUC_CONST;
GType planner_sqlite_database_get_type (void) G_GNUC_CONST;
GType planner_app_settings_get_type (void) G_GNUC_CONST;
GType planner_headerbar_get_type (void) G_GNUC_CONST;
GType planner_welcome_view_get_type (void) G_GNUC_CONST;
#define PLANNER_MAIN_WINDOW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), PLANNER_TYPE_MAIN_WINDOW, PlannerMainWindowPrivate))
enum  {
	PLANNER_MAIN_WINDOW_0_PROPERTY
};
PlannerMainWindow* planner_main_window_new (GtkApplication* application);
PlannerMainWindow* planner_main_window_construct (GType object_type, GtkApplication* application);
void planner_main_window_build_ui (PlannerMainWindow* self);
PlannerHeaderbar* planner_headerbar_new (void);
PlannerHeaderbar* planner_headerbar_construct (GType object_type);
gboolean planner_utils_exists_database (void);
PlannerWelcomeView* planner_welcome_view_new (void);
PlannerWelcomeView* planner_welcome_view_construct (GType object_type);
static GObject * planner_main_window_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
PlannerSqliteDatabase* planner_sqlite_database_new (gboolean skip_tables);
PlannerSqliteDatabase* planner_sqlite_database_construct (GType object_type, gboolean skip_tables);
static void planner_main_window_finalize (GObject * obj);


PlannerMainWindow* planner_main_window_construct (GType object_type, GtkApplication* application) {
	PlannerMainWindow * self = NULL;
	GtkApplication* _tmp0_;
#line 11 "/home/alain/Vala/planner/src/MainWindow.vala"
	g_return_val_if_fail (application != NULL, NULL);
#line 12 "/home/alain/Vala/planner/src/MainWindow.vala"
	_tmp0_ = application;
#line 12 "/home/alain/Vala/planner/src/MainWindow.vala"
	self = (PlannerMainWindow*) g_object_new (object_type, "application", _tmp0_, "icon-name", "com.github.alainm23.planner", "default-height", 829, "default-width", 1199, "title", _ ("Planner"), "window-position", GTK_WIN_POS_CENTER, NULL);
#line 11 "/home/alain/Vala/planner/src/MainWindow.vala"
	return self;
#line 118 "MainWindow.c"
}


PlannerMainWindow* planner_main_window_new (GtkApplication* application) {
#line 11 "/home/alain/Vala/planner/src/MainWindow.vala"
	return planner_main_window_construct (PLANNER_TYPE_MAIN_WINDOW, application);
#line 125 "MainWindow.c"
}


void planner_main_window_build_ui (PlannerMainWindow* self) {
	PlannerHeaderbar* _tmp0_;
	PlannerHeaderbar* _tmp1_;
	gboolean _tmp2_;
#line 34 "/home/alain/Vala/planner/src/MainWindow.vala"
	g_return_if_fail (self != NULL);
#line 36 "/home/alain/Vala/planner/src/MainWindow.vala"
	_tmp0_ = planner_headerbar_new ();
#line 36 "/home/alain/Vala/planner/src/MainWindow.vala"
	g_object_ref_sink (_tmp0_);
#line 36 "/home/alain/Vala/planner/src/MainWindow.vala"
	_g_object_unref0 (self->priv->headerbar);
#line 36 "/home/alain/Vala/planner/src/MainWindow.vala"
	self->priv->headerbar = _tmp0_;
#line 37 "/home/alain/Vala/planner/src/MainWindow.vala"
	_tmp1_ = self->priv->headerbar;
#line 37 "/home/alain/Vala/planner/src/MainWindow.vala"
	gtk_window_set_titlebar ((GtkWindow*) self, (GtkWidget*) _tmp1_);
#line 39 "/home/alain/Vala/planner/src/MainWindow.vala"
	_tmp2_ = planner_utils_exists_database ();
#line 39 "/home/alain/Vala/planner/src/MainWindow.vala"
	if (!_tmp2_) {
#line 151 "MainWindow.c"
		PlannerWelcomeView* _tmp3_;
		PlannerWelcomeView* _tmp4_;
#line 40 "/home/alain/Vala/planner/src/MainWindow.vala"
		_tmp3_ = planner_welcome_view_new ();
#line 40 "/home/alain/Vala/planner/src/MainWindow.vala"
		g_object_ref_sink (_tmp3_);
#line 40 "/home/alain/Vala/planner/src/MainWindow.vala"
		_g_object_unref0 (self->priv->welcome);
#line 40 "/home/alain/Vala/planner/src/MainWindow.vala"
		self->priv->welcome = _tmp3_;
#line 41 "/home/alain/Vala/planner/src/MainWindow.vala"
		_tmp4_ = self->priv->welcome;
#line 41 "/home/alain/Vala/planner/src/MainWindow.vala"
		gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp4_);
#line 166 "MainWindow.c"
	}
}


static GObject * planner_main_window_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	PlannerMainWindow * self;
	GtkIconTheme* default_theme = NULL;
	GtkIconTheme* _tmp0_;
	GtkIconTheme* _tmp1_;
	PlannerSqliteDatabase* _tmp2_;
#line 22 "/home/alain/Vala/planner/src/MainWindow.vala"
	parent_class = G_OBJECT_CLASS (planner_main_window_parent_class);
#line 22 "/home/alain/Vala/planner/src/MainWindow.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 22 "/home/alain/Vala/planner/src/MainWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANNER_TYPE_MAIN_WINDOW, PlannerMainWindow);
#line 25 "/home/alain/Vala/planner/src/MainWindow.vala"
	_tmp0_ = gtk_icon_theme_get_default ();
#line 25 "/home/alain/Vala/planner/src/MainWindow.vala"
	default_theme = _tmp0_;
#line 26 "/home/alain/Vala/planner/src/MainWindow.vala"
	_tmp1_ = default_theme;
#line 26 "/home/alain/Vala/planner/src/MainWindow.vala"
	gtk_icon_theme_add_resource_path (_tmp1_, "/com/github/alainm23/planner");
#line 28 "/home/alain/Vala/planner/src/MainWindow.vala"
	_tmp2_ = planner_sqlite_database_new (FALSE);
#line 28 "/home/alain/Vala/planner/src/MainWindow.vala"
	_g_object_unref0 (self->db);
#line 28 "/home/alain/Vala/planner/src/MainWindow.vala"
	self->db = _tmp2_;
#line 30 "/home/alain/Vala/planner/src/MainWindow.vala"
	planner_main_window_build_ui (self);
#line 22 "/home/alain/Vala/planner/src/MainWindow.vala"
	return obj;
#line 203 "MainWindow.c"
}


static void planner_main_window_class_init (PlannerMainWindowClass * klass) {
#line 2 "/home/alain/Vala/planner/src/MainWindow.vala"
	planner_main_window_parent_class = g_type_class_peek_parent (klass);
#line 2 "/home/alain/Vala/planner/src/MainWindow.vala"
	g_type_class_add_private (klass, sizeof (PlannerMainWindowPrivate));
#line 2 "/home/alain/Vala/planner/src/MainWindow.vala"
	G_OBJECT_CLASS (klass)->constructor = planner_main_window_constructor;
#line 2 "/home/alain/Vala/planner/src/MainWindow.vala"
	G_OBJECT_CLASS (klass)->finalize = planner_main_window_finalize;
#line 216 "MainWindow.c"
}


static void planner_main_window_instance_init (PlannerMainWindow * self) {
#line 2 "/home/alain/Vala/planner/src/MainWindow.vala"
	self->priv = PLANNER_MAIN_WINDOW_GET_PRIVATE (self);
#line 223 "MainWindow.c"
}


static void planner_main_window_finalize (GObject * obj) {
	PlannerMainWindow * self;
#line 2 "/home/alain/Vala/planner/src/MainWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANNER_TYPE_MAIN_WINDOW, PlannerMainWindow);
#line 4 "/home/alain/Vala/planner/src/MainWindow.vala"
	_g_object_unref0 (self->priv->settings);
#line 6 "/home/alain/Vala/planner/src/MainWindow.vala"
	_g_object_unref0 (self->priv->headerbar);
#line 7 "/home/alain/Vala/planner/src/MainWindow.vala"
	_g_object_unref0 (self->priv->welcome);
#line 9 "/home/alain/Vala/planner/src/MainWindow.vala"
	_g_object_unref0 (self->db);
#line 2 "/home/alain/Vala/planner/src/MainWindow.vala"
	G_OBJECT_CLASS (planner_main_window_parent_class)->finalize (obj);
#line 241 "MainWindow.c"
}


GType planner_main_window_get_type (void) {
	static volatile gsize planner_main_window_type_id__volatile = 0;
	if (g_once_init_enter (&planner_main_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PlannerMainWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) planner_main_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PlannerMainWindow), 0, (GInstanceInitFunc) planner_main_window_instance_init, NULL };
		GType planner_main_window_type_id;
		planner_main_window_type_id = g_type_register_static (gtk_window_get_type (), "PlannerMainWindow", &g_define_type_info, 0);
		g_once_init_leave (&planner_main_window_type_id__volatile, planner_main_window_type_id);
	}
	return planner_main_window_type_id__volatile;
}



