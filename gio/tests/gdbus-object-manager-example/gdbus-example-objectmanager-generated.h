/*
 * Generated by gdbus-codegen 2.36.4. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __GDBUS_EXAMPLE_OBJECTMANAGER_GENERATED_H__
#define __GDBUS_EXAMPLE_OBJECTMANAGER_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gtk.GDBus.Example.ObjectManager.Animal */

#define EXAMPLE_TYPE_ANIMAL (example_animal_get_type ())
#define EXAMPLE_ANIMAL(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_ANIMAL, ExampleAnimal))
#define EXAMPLE_IS_ANIMAL(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_ANIMAL))
#define EXAMPLE_ANIMAL_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EXAMPLE_TYPE_ANIMAL, ExampleAnimalIface))

struct _ExampleAnimal;
typedef struct _ExampleAnimal ExampleAnimal;
typedef struct _ExampleAnimalIface ExampleAnimalIface;

struct _ExampleAnimalIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_poke) (
    ExampleAnimal *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_make_sad,
    gboolean arg_make_happy);

  const gchar * (*get_foo) (ExampleAnimal *object);

  const gchar * (*get_mood) (ExampleAnimal *object);

  void (*jumped) (
    ExampleAnimal *object,
    gdouble arg_height);

  const gchar * (*get_bar) (ExampleAnimal *object);

};

GType example_animal_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *example_animal_interface_info (void);
guint example_animal_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void example_animal_complete_poke (
    ExampleAnimal *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void example_animal_emit_jumped (
    ExampleAnimal *object,
    gdouble arg_height);



/* D-Bus method calls: */
void example_animal_call_poke (
    ExampleAnimal *proxy,
    gboolean arg_make_sad,
    gboolean arg_make_happy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean example_animal_call_poke_finish (
    ExampleAnimal *proxy,
    GAsyncResult *res,
    GError **error);

gboolean example_animal_call_poke_sync (
    ExampleAnimal *proxy,
    gboolean arg_make_sad,
    gboolean arg_make_happy,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *example_animal_get_mood (ExampleAnimal *object);
gchar *example_animal_dup_mood (ExampleAnimal *object);
void example_animal_set_mood (ExampleAnimal *object, const gchar *value);

const gchar *example_animal_get_foo (ExampleAnimal *object);
gchar *example_animal_dup_foo (ExampleAnimal *object);
void example_animal_set_foo (ExampleAnimal *object, const gchar *value);

const gchar *example_animal_get_bar (ExampleAnimal *object);
gchar *example_animal_dup_bar (ExampleAnimal *object);
void example_animal_set_bar (ExampleAnimal *object, const gchar *value);


/* ---- */

#define EXAMPLE_TYPE_ANIMAL_PROXY (example_animal_proxy_get_type ())
#define EXAMPLE_ANIMAL_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_ANIMAL_PROXY, ExampleAnimalProxy))
#define EXAMPLE_ANIMAL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EXAMPLE_TYPE_ANIMAL_PROXY, ExampleAnimalProxyClass))
#define EXAMPLE_ANIMAL_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EXAMPLE_TYPE_ANIMAL_PROXY, ExampleAnimalProxyClass))
#define EXAMPLE_IS_ANIMAL_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_ANIMAL_PROXY))
#define EXAMPLE_IS_ANIMAL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EXAMPLE_TYPE_ANIMAL_PROXY))

typedef struct _ExampleAnimalProxy ExampleAnimalProxy;
typedef struct _ExampleAnimalProxyClass ExampleAnimalProxyClass;
typedef struct _ExampleAnimalProxyPrivate ExampleAnimalProxyPrivate;

struct _ExampleAnimalProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  ExampleAnimalProxyPrivate *priv;
};

struct _ExampleAnimalProxyClass
{
  GDBusProxyClass parent_class;
};

GType example_animal_proxy_get_type (void) G_GNUC_CONST;

void example_animal_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ExampleAnimal *example_animal_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
ExampleAnimal *example_animal_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void example_animal_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ExampleAnimal *example_animal_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
ExampleAnimal *example_animal_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define EXAMPLE_TYPE_ANIMAL_SKELETON (example_animal_skeleton_get_type ())
#define EXAMPLE_ANIMAL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_ANIMAL_SKELETON, ExampleAnimalSkeleton))
#define EXAMPLE_ANIMAL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EXAMPLE_TYPE_ANIMAL_SKELETON, ExampleAnimalSkeletonClass))
#define EXAMPLE_ANIMAL_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EXAMPLE_TYPE_ANIMAL_SKELETON, ExampleAnimalSkeletonClass))
#define EXAMPLE_IS_ANIMAL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_ANIMAL_SKELETON))
#define EXAMPLE_IS_ANIMAL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EXAMPLE_TYPE_ANIMAL_SKELETON))

typedef struct _ExampleAnimalSkeleton ExampleAnimalSkeleton;
typedef struct _ExampleAnimalSkeletonClass ExampleAnimalSkeletonClass;
typedef struct _ExampleAnimalSkeletonPrivate ExampleAnimalSkeletonPrivate;

struct _ExampleAnimalSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  ExampleAnimalSkeletonPrivate *priv;
};

struct _ExampleAnimalSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType example_animal_skeleton_get_type (void) G_GNUC_CONST;

ExampleAnimal *example_animal_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.gtk.GDBus.Example.ObjectManager.Cat */

#define EXAMPLE_TYPE_CAT (example_cat_get_type ())
#define EXAMPLE_CAT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_CAT, ExampleCat))
#define EXAMPLE_IS_CAT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_CAT))
#define EXAMPLE_CAT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EXAMPLE_TYPE_CAT, ExampleCatIface))

struct _ExampleCat;
typedef struct _ExampleCat ExampleCat;
typedef struct _ExampleCatIface ExampleCatIface;

struct _ExampleCatIface
{
  GTypeInterface parent_iface;
};

GType example_cat_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *example_cat_interface_info (void);
guint example_cat_override_properties (GObjectClass *klass, guint property_id_begin);


/* ---- */

#define EXAMPLE_TYPE_CAT_PROXY (example_cat_proxy_get_type ())
#define EXAMPLE_CAT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_CAT_PROXY, ExampleCatProxy))
#define EXAMPLE_CAT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EXAMPLE_TYPE_CAT_PROXY, ExampleCatProxyClass))
#define EXAMPLE_CAT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EXAMPLE_TYPE_CAT_PROXY, ExampleCatProxyClass))
#define EXAMPLE_IS_CAT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_CAT_PROXY))
#define EXAMPLE_IS_CAT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EXAMPLE_TYPE_CAT_PROXY))

typedef struct _ExampleCatProxy ExampleCatProxy;
typedef struct _ExampleCatProxyClass ExampleCatProxyClass;
typedef struct _ExampleCatProxyPrivate ExampleCatProxyPrivate;

struct _ExampleCatProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  ExampleCatProxyPrivate *priv;
};

struct _ExampleCatProxyClass
{
  GDBusProxyClass parent_class;
};

GType example_cat_proxy_get_type (void) G_GNUC_CONST;

void example_cat_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ExampleCat *example_cat_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
ExampleCat *example_cat_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void example_cat_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
ExampleCat *example_cat_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
ExampleCat *example_cat_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define EXAMPLE_TYPE_CAT_SKELETON (example_cat_skeleton_get_type ())
#define EXAMPLE_CAT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_CAT_SKELETON, ExampleCatSkeleton))
#define EXAMPLE_CAT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EXAMPLE_TYPE_CAT_SKELETON, ExampleCatSkeletonClass))
#define EXAMPLE_CAT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EXAMPLE_TYPE_CAT_SKELETON, ExampleCatSkeletonClass))
#define EXAMPLE_IS_CAT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_CAT_SKELETON))
#define EXAMPLE_IS_CAT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EXAMPLE_TYPE_CAT_SKELETON))

typedef struct _ExampleCatSkeleton ExampleCatSkeleton;
typedef struct _ExampleCatSkeletonClass ExampleCatSkeletonClass;
typedef struct _ExampleCatSkeletonPrivate ExampleCatSkeletonPrivate;

struct _ExampleCatSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  ExampleCatSkeletonPrivate *priv;
};

struct _ExampleCatSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType example_cat_skeleton_get_type (void) G_GNUC_CONST;

ExampleCat *example_cat_skeleton_new (void);


/* ---- */

#define EXAMPLE_TYPE_OBJECT (example_object_get_type ())
#define EXAMPLE_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_OBJECT, ExampleObject))
#define EXAMPLE_IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_OBJECT))
#define EXAMPLE_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EXAMPLE_TYPE_OBJECT, ExampleObject))

struct _ExampleObject;
typedef struct _ExampleObject ExampleObject;
typedef struct _ExampleObjectIface ExampleObjectIface;

struct _ExampleObjectIface
{
  GTypeInterface parent_iface;
};

GType example_object_get_type (void) G_GNUC_CONST;

ExampleAnimal *example_object_get_animal (ExampleObject *object);
ExampleCat *example_object_get_cat (ExampleObject *object);
ExampleAnimal *example_object_peek_animal (ExampleObject *object);
ExampleCat *example_object_peek_cat (ExampleObject *object);

#define EXAMPLE_TYPE_OBJECT_PROXY (example_object_proxy_get_type ())
#define EXAMPLE_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_OBJECT_PROXY, ExampleObjectProxy))
#define EXAMPLE_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EXAMPLE_TYPE_OBJECT_PROXY, ExampleObjectProxyClass))
#define EXAMPLE_OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EXAMPLE_TYPE_OBJECT_PROXY, ExampleObjectProxyClass))
#define EXAMPLE_IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_OBJECT_PROXY))
#define EXAMPLE_IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EXAMPLE_TYPE_OBJECT_PROXY))

typedef struct _ExampleObjectProxy ExampleObjectProxy;
typedef struct _ExampleObjectProxyClass ExampleObjectProxyClass;
typedef struct _ExampleObjectProxyPrivate ExampleObjectProxyPrivate;

struct _ExampleObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  ExampleObjectProxyPrivate *priv;
};

struct _ExampleObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType example_object_proxy_get_type (void) G_GNUC_CONST;
ExampleObjectProxy *example_object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define EXAMPLE_TYPE_OBJECT_SKELETON (example_object_skeleton_get_type ())
#define EXAMPLE_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_OBJECT_SKELETON, ExampleObjectSkeleton))
#define EXAMPLE_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EXAMPLE_TYPE_OBJECT_SKELETON, ExampleObjectSkeletonClass))
#define EXAMPLE_OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EXAMPLE_TYPE_OBJECT_SKELETON, ExampleObjectSkeletonClass))
#define EXAMPLE_IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_OBJECT_SKELETON))
#define EXAMPLE_IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EXAMPLE_TYPE_OBJECT_SKELETON))

typedef struct _ExampleObjectSkeleton ExampleObjectSkeleton;
typedef struct _ExampleObjectSkeletonClass ExampleObjectSkeletonClass;
typedef struct _ExampleObjectSkeletonPrivate ExampleObjectSkeletonPrivate;

struct _ExampleObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  ExampleObjectSkeletonPrivate *priv;
};

struct _ExampleObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType example_object_skeleton_get_type (void) G_GNUC_CONST;
ExampleObjectSkeleton *example_object_skeleton_new (const gchar *object_path);
void example_object_skeleton_set_animal (ExampleObjectSkeleton *object, ExampleAnimal *interface_);
void example_object_skeleton_set_cat (ExampleObjectSkeleton *object, ExampleCat *interface_);

/* ---- */

#define EXAMPLE_TYPE_OBJECT_MANAGER_CLIENT (example_object_manager_client_get_type ())
#define EXAMPLE_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EXAMPLE_TYPE_OBJECT_MANAGER_CLIENT, ExampleObjectManagerClient))
#define EXAMPLE_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EXAMPLE_TYPE_OBJECT_MANAGER_CLIENT, ExampleObjectManagerClientClass))
#define EXAMPLE_OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EXAMPLE_TYPE_OBJECT_MANAGER_CLIENT, ExampleObjectManagerClientClass))
#define EXAMPLE_IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EXAMPLE_TYPE_OBJECT_MANAGER_CLIENT))
#define EXAMPLE_IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EXAMPLE_TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _ExampleObjectManagerClient ExampleObjectManagerClient;
typedef struct _ExampleObjectManagerClientClass ExampleObjectManagerClientClass;
typedef struct _ExampleObjectManagerClientPrivate ExampleObjectManagerClientPrivate;

struct _ExampleObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  ExampleObjectManagerClientPrivate *priv;
};

struct _ExampleObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

GType example_object_manager_client_get_type (void) G_GNUC_CONST;

GType example_object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void example_object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *example_object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *example_object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void example_object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *example_object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *example_object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __GDBUS_EXAMPLE_OBJECTMANAGER_GENERATED_H__ */
