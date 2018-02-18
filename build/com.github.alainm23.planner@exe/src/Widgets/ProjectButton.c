/* ProjectButton.c generated by valac 0.36.12, the Vala compiler
 * generated from ProjectButton.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <granite.h>
#include <pango/pango.h>


#define PLANNER_TYPE_PROJECT_BUTTON (planner_project_button_get_type ())
#define PLANNER_PROJECT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_PROJECT_BUTTON, PlannerProjectButton))
#define PLANNER_PROJECT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_PROJECT_BUTTON, PlannerProjectButtonClass))
#define PLANNER_IS_PROJECT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_PROJECT_BUTTON))
#define PLANNER_IS_PROJECT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_PROJECT_BUTTON))
#define PLANNER_PROJECT_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_PROJECT_BUTTON, PlannerProjectButtonClass))

typedef struct _PlannerProjectButton PlannerProjectButton;
typedef struct _PlannerProjectButtonClass PlannerProjectButtonClass;
typedef struct _PlannerProjectButtonPrivate PlannerProjectButtonPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block2Data Block2Data;

#define PLANNER_TYPE_PROJECT_POPOVER (planner_project_popover_get_type ())
#define PLANNER_PROJECT_POPOVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_PROJECT_POPOVER, PlannerProjectPopover))
#define PLANNER_PROJECT_POPOVER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_PROJECT_POPOVER, PlannerProjectPopoverClass))
#define PLANNER_IS_PROJECT_POPOVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_PROJECT_POPOVER))
#define PLANNER_IS_PROJECT_POPOVER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_PROJECT_POPOVER))
#define PLANNER_PROJECT_POPOVER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_PROJECT_POPOVER, PlannerProjectPopoverClass))

typedef struct _PlannerProjectPopover PlannerProjectPopover;
typedef struct _PlannerProjectPopoverClass PlannerProjectPopoverClass;

struct _PlannerProjectButton {
	GtkGrid parent_instance;
	PlannerProjectButtonPrivate * priv;
};

struct _PlannerProjectButtonClass {
	GtkGridClass parent_class;
};

struct _PlannerProjectButtonPrivate {
	GtkLabel* project_title;
	GtkLabel* project_description;
	GtkButton* _icon;
	GtkGrid* project_grid;
};

struct _Block2Data {
	int _ref_count_;
	PlannerProjectButton* self;
	GtkButton* icon;
};


static gpointer planner_project_button_parent_class = NULL;

GType planner_project_button_get_type (void) G_GNUC_CONST;
#define PLANNER_PROJECT_BUTTON_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), PLANNER_TYPE_PROJECT_BUTTON, PlannerProjectButtonPrivate))
enum  {
	PLANNER_PROJECT_BUTTON_0_PROPERTY
};
PlannerProjectButton* planner_project_button_new (void);
PlannerProjectButton* planner_project_button_construct (GType object_type);
static GObject * planner_project_button_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
static void _planner_project_button___lambda4_ (Block2Data* _data2_);
GType planner_project_popover_get_type (void) G_GNUC_CONST;
PlannerProjectPopover* planner_project_popover_new (GtkWidget* relative);
PlannerProjectPopover* planner_project_popover_construct (GType object_type, GtkWidget* relative);
static void __planner_project_button___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void planner_project_button_finalize (GObject * obj);


PlannerProjectButton* planner_project_button_construct (GType object_type) {
	PlannerProjectButton * self = NULL;
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	self = (PlannerProjectButton*) g_object_new (object_type, NULL);
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	return self;
#line 85 "ProjectButton.c"
}


PlannerProjectButton* planner_project_button_new (void) {
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	return planner_project_button_construct (PLANNER_TYPE_PROJECT_BUTTON);
#line 92 "ProjectButton.c"
}


static Block2Data* block2_data_ref (Block2Data* _data2_) {
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	g_atomic_int_inc (&_data2_->_ref_count_);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	return _data2_;
#line 101 "ProjectButton.c"
}


static void block2_data_unref (void * _userdata_) {
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
#line 110 "ProjectButton.c"
		PlannerProjectButton* self;
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
		self = _data2_->self;
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
		_g_object_unref0 (_data2_->icon);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
		_g_object_unref0 (self);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
		g_slice_free (Block2Data, _data2_);
#line 120 "ProjectButton.c"
	}
}


static void _planner_project_button___lambda4_ (Block2Data* _data2_) {
	PlannerProjectButton* self;
	PlannerProjectPopover* popover = NULL;
	GtkButton* _tmp0_;
	PlannerProjectPopover* _tmp1_;
	PlannerProjectPopover* _tmp2_;
#line 29 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	self = _data2_->self;
#line 30 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp0_ = _data2_->icon;
#line 30 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp1_ = planner_project_popover_new ((GtkWidget*) _tmp0_);
#line 30 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	g_object_ref_sink (_tmp1_);
#line 30 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	popover = _tmp1_;
#line 31 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp2_ = popover;
#line 31 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_widget_show_all ((GtkWidget*) _tmp2_);
#line 29 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_g_object_unref0 (popover);
#line 147 "ProjectButton.c"
}


static void __planner_project_button___lambda4__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 29 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_planner_project_button___lambda4_ (self);
#line 154 "ProjectButton.c"
}


static GObject * planner_project_button_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	PlannerProjectButton * self;
	Block2Data* _data2_;
	GtkLabel* _tmp0_;
	GtkLabel* _tmp1_;
	GtkLabel* _tmp2_;
	GtkStyleContext* _tmp3_;
	GtkLabel* _tmp4_;
	GtkLabel* _tmp5_;
	GtkLabel* _tmp6_;
	GtkLabel* _tmp7_;
	GtkLabel* _tmp8_;
	GtkLabel* _tmp9_;
	GtkLabel* _tmp10_;
	GtkLabel* _tmp11_;
	GtkStyleContext* _tmp12_;
	GtkButton* _tmp13_;
	GtkButton* _tmp14_;
	GtkButton* _tmp15_;
	GtkLabel* _tmp16_;
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	parent_class = G_OBJECT_CLASS (planner_project_button_parent_class);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANNER_TYPE_PROJECT_BUTTON, PlannerProjectButton);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_data2_ = g_slice_new0 (Block2Data);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_data2_->_ref_count_ = 1;
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_data2_->self = g_object_ref (self);
#line 13 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp0_ = (GtkLabel*) gtk_label_new ("Project title");
#line 13 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	g_object_ref_sink (_tmp0_);
#line 13 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_g_object_unref0 (self->priv->project_title);
#line 13 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	self->priv->project_title = _tmp0_;
#line 14 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp1_ = self->priv->project_title;
#line 14 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_widget_set_margin_left ((GtkWidget*) _tmp1_, 6);
#line 15 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp2_ = self->priv->project_title;
#line 15 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp3_ = gtk_widget_get_style_context ((GtkWidget*) _tmp2_);
#line 15 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_style_context_add_class (_tmp3_, GRANITE_STYLE_CLASS_H3_LABEL);
#line 16 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp4_ = self->priv->project_title;
#line 16 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp4_, GTK_ALIGN_START);
#line 17 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp5_ = self->priv->project_title;
#line 17 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_widget_set_valign ((GtkWidget*) _tmp5_, GTK_ALIGN_END);
#line 20 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp6_ = (GtkLabel*) gtk_label_new ("project description");
#line 20 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	g_object_ref_sink (_tmp6_);
#line 20 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_g_object_unref0 (self->priv->project_description);
#line 20 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	self->priv->project_description = _tmp6_;
#line 21 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp7_ = self->priv->project_description;
#line 21 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp7_, GTK_ALIGN_START);
#line 22 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp8_ = self->priv->project_description;
#line 22 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_widget_set_valign ((GtkWidget*) _tmp8_, GTK_ALIGN_START);
#line 23 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp9_ = self->priv->project_description;
#line 23 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_label_set_line_wrap (_tmp9_, TRUE);
#line 24 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp10_ = self->priv->project_description;
#line 24 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_label_set_line_wrap_mode (_tmp10_, PANGO_WRAP_WORD);
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp11_ = self->priv->project_description;
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp12_ = gtk_widget_get_style_context ((GtkWidget*) _tmp11_);
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_style_context_add_class (_tmp12_, GTK_STYLE_CLASS_DIM_LABEL);
#line 27 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp13_ = (GtkButton*) gtk_button_new_from_icon_name ("planner-computer", GTK_ICON_SIZE_DND);
#line 27 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	g_object_ref_sink (_tmp13_);
#line 27 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_data2_->icon = _tmp13_;
#line 29 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp14_ = _data2_->icon;
#line 29 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	g_signal_connect_data (_tmp14_, "clicked", (GCallback) __planner_project_button___lambda4__gtk_button_clicked, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
#line 34 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp15_ = _data2_->icon;
#line 34 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp15_, 0, 0, 1, 2);
#line 35 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_tmp16_ = self->priv->project_title;
#line 35 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp16_, 1, 0, 1, 1);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	block2_data_unref (_data2_);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_data2_ = NULL;
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	return obj;
#line 272 "ProjectButton.c"
}


static void planner_project_button_class_init (PlannerProjectButtonClass * klass) {
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	planner_project_button_parent_class = g_type_class_peek_parent (klass);
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	g_type_class_add_private (klass, sizeof (PlannerProjectButtonPrivate));
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	G_OBJECT_CLASS (klass)->constructor = planner_project_button_constructor;
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	G_OBJECT_CLASS (klass)->finalize = planner_project_button_finalize;
#line 285 "ProjectButton.c"
}


static void planner_project_button_instance_init (PlannerProjectButton * self) {
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	self->priv = PLANNER_PROJECT_BUTTON_GET_PRIVATE (self);
#line 292 "ProjectButton.c"
}


static void planner_project_button_finalize (GObject * obj) {
	PlannerProjectButton * self;
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANNER_TYPE_PROJECT_BUTTON, PlannerProjectButton);
#line 4 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_g_object_unref0 (self->priv->project_title);
#line 5 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_g_object_unref0 (self->priv->project_description);
#line 6 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_g_object_unref0 (self->priv->_icon);
#line 8 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	_g_object_unref0 (self->priv->project_grid);
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectButton.vala"
	G_OBJECT_CLASS (planner_project_button_parent_class)->finalize (obj);
#line 310 "ProjectButton.c"
}


GType planner_project_button_get_type (void) {
	static volatile gsize planner_project_button_type_id__volatile = 0;
	if (g_once_init_enter (&planner_project_button_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PlannerProjectButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) planner_project_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PlannerProjectButton), 0, (GInstanceInitFunc) planner_project_button_instance_init, NULL };
		GType planner_project_button_type_id;
		planner_project_button_type_id = g_type_register_static (gtk_grid_get_type (), "PlannerProjectButton", &g_define_type_info, 0);
		g_once_init_leave (&planner_project_button_type_id__volatile, planner_project_button_type_id);
	}
	return planner_project_button_type_id__volatile;
}



