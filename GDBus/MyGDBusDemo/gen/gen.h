/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __GEN_H__
#define __GEN_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for GDBus.Demo.foo */

#define NAMESPACE_TYPE_FOO (namespace_foo_get_type ())
#define NAMESPACE_FOO(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NAMESPACE_TYPE_FOO, namespaceFoo))
#define NAMESPACE_IS_FOO(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NAMESPACE_TYPE_FOO))
#define NAMESPACE_FOO_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NAMESPACE_TYPE_FOO, namespaceFooIface))

struct _namespaceFoo;
typedef struct _namespaceFoo namespaceFoo;
typedef struct _namespaceFooIface namespaceFooIface;

struct _namespaceFooIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_set_value) (
    namespaceFoo *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_in);

  const gchar * (*get_value) (namespaceFoo *object);

  void (*send_value) (
    namespaceFoo *object,
    const gchar *arg_value);

};

GType namespace_foo_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *namespace_foo_interface_info (void);
guint namespace_foo_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void namespace_foo_complete_set_value (
    namespaceFoo *object,
    GDBusMethodInvocation *invocation,
    gboolean out);



/* D-Bus signal emissions functions: */
void namespace_foo_emit_send_value (
    namespaceFoo *object,
    const gchar *arg_value);



/* D-Bus method calls: */
void namespace_foo_call_set_value (
    namespaceFoo *proxy,
    const gchar *arg_in,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean namespace_foo_call_set_value_finish (
    namespaceFoo *proxy,
    gboolean *out_out,
    GAsyncResult *res,
    GError **error);

gboolean namespace_foo_call_set_value_sync (
    namespaceFoo *proxy,
    const gchar *arg_in,
    gboolean *out_out,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *namespace_foo_get_value (namespaceFoo *object);
gchar *namespace_foo_dup_value (namespaceFoo *object);
void namespace_foo_set_value (namespaceFoo *object, const gchar *value);


/* ---- */

#define NAMESPACE_TYPE_FOO_PROXY (namespace_foo_proxy_get_type ())
#define NAMESPACE_FOO_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NAMESPACE_TYPE_FOO_PROXY, namespaceFooProxy))
#define NAMESPACE_FOO_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NAMESPACE_TYPE_FOO_PROXY, namespaceFooProxyClass))
#define NAMESPACE_FOO_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NAMESPACE_TYPE_FOO_PROXY, namespaceFooProxyClass))
#define NAMESPACE_IS_FOO_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NAMESPACE_TYPE_FOO_PROXY))
#define NAMESPACE_IS_FOO_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NAMESPACE_TYPE_FOO_PROXY))

typedef struct _namespaceFooProxy namespaceFooProxy;
typedef struct _namespaceFooProxyClass namespaceFooProxyClass;
typedef struct _namespaceFooProxyPrivate namespaceFooProxyPrivate;

struct _namespaceFooProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  namespaceFooProxyPrivate *priv;
};

struct _namespaceFooProxyClass
{
  GDBusProxyClass parent_class;
};

GType namespace_foo_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (namespaceFooProxy, g_object_unref)
#endif

void namespace_foo_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
namespaceFoo *namespace_foo_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
namespaceFoo *namespace_foo_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void namespace_foo_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
namespaceFoo *namespace_foo_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
namespaceFoo *namespace_foo_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NAMESPACE_TYPE_FOO_SKELETON (namespace_foo_skeleton_get_type ())
#define NAMESPACE_FOO_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NAMESPACE_TYPE_FOO_SKELETON, namespaceFooSkeleton))
#define NAMESPACE_FOO_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NAMESPACE_TYPE_FOO_SKELETON, namespaceFooSkeletonClass))
#define NAMESPACE_FOO_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NAMESPACE_TYPE_FOO_SKELETON, namespaceFooSkeletonClass))
#define NAMESPACE_IS_FOO_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NAMESPACE_TYPE_FOO_SKELETON))
#define NAMESPACE_IS_FOO_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NAMESPACE_TYPE_FOO_SKELETON))

typedef struct _namespaceFooSkeleton namespaceFooSkeleton;
typedef struct _namespaceFooSkeletonClass namespaceFooSkeletonClass;
typedef struct _namespaceFooSkeletonPrivate namespaceFooSkeletonPrivate;

struct _namespaceFooSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  namespaceFooSkeletonPrivate *priv;
};

struct _namespaceFooSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType namespace_foo_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (namespaceFooSkeleton, g_object_unref)
#endif

namespaceFoo *namespace_foo_skeleton_new (void);


/* ---- */

#define NAMESPACE_TYPE_OBJECT (namespace_object_get_type ())
#define NAMESPACE_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NAMESPACE_TYPE_OBJECT, namespaceObject))
#define NAMESPACE_IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NAMESPACE_TYPE_OBJECT))
#define NAMESPACE_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NAMESPACE_TYPE_OBJECT, namespaceObject))

struct _namespaceObject;
typedef struct _namespaceObject namespaceObject;
typedef struct _namespaceObjectIface namespaceObjectIface;

struct _namespaceObjectIface
{
  GTypeInterface parent_iface;
};

GType namespace_object_get_type (void) G_GNUC_CONST;

namespaceFoo *namespace_object_get_foo (namespaceObject *object);
namespaceFoo *namespace_object_peek_foo (namespaceObject *object);

#define NAMESPACE_TYPE_OBJECT_PROXY (namespace_object_proxy_get_type ())
#define NAMESPACE_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NAMESPACE_TYPE_OBJECT_PROXY, namespaceObjectProxy))
#define NAMESPACE_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NAMESPACE_TYPE_OBJECT_PROXY, namespaceObjectProxyClass))
#define NAMESPACE_OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NAMESPACE_TYPE_OBJECT_PROXY, namespaceObjectProxyClass))
#define NAMESPACE_IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NAMESPACE_TYPE_OBJECT_PROXY))
#define NAMESPACE_IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NAMESPACE_TYPE_OBJECT_PROXY))

typedef struct _namespaceObjectProxy namespaceObjectProxy;
typedef struct _namespaceObjectProxyClass namespaceObjectProxyClass;
typedef struct _namespaceObjectProxyPrivate namespaceObjectProxyPrivate;

struct _namespaceObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  namespaceObjectProxyPrivate *priv;
};

struct _namespaceObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType namespace_object_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (namespaceObjectProxy, g_object_unref)
#endif

namespaceObjectProxy *namespace_object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define NAMESPACE_TYPE_OBJECT_SKELETON (namespace_object_skeleton_get_type ())
#define NAMESPACE_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NAMESPACE_TYPE_OBJECT_SKELETON, namespaceObjectSkeleton))
#define NAMESPACE_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NAMESPACE_TYPE_OBJECT_SKELETON, namespaceObjectSkeletonClass))
#define NAMESPACE_OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NAMESPACE_TYPE_OBJECT_SKELETON, namespaceObjectSkeletonClass))
#define NAMESPACE_IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NAMESPACE_TYPE_OBJECT_SKELETON))
#define NAMESPACE_IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NAMESPACE_TYPE_OBJECT_SKELETON))

typedef struct _namespaceObjectSkeleton namespaceObjectSkeleton;
typedef struct _namespaceObjectSkeletonClass namespaceObjectSkeletonClass;
typedef struct _namespaceObjectSkeletonPrivate namespaceObjectSkeletonPrivate;

struct _namespaceObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  namespaceObjectSkeletonPrivate *priv;
};

struct _namespaceObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType namespace_object_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (namespaceObjectSkeleton, g_object_unref)
#endif

namespaceObjectSkeleton *namespace_object_skeleton_new (const gchar *object_path);
void namespace_object_skeleton_set_foo (namespaceObjectSkeleton *object, namespaceFoo *interface_);

/* ---- */

#define NAMESPACE_TYPE_OBJECT_MANAGER_CLIENT (namespace_object_manager_client_get_type ())
#define NAMESPACE_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NAMESPACE_TYPE_OBJECT_MANAGER_CLIENT, namespaceObjectManagerClient))
#define NAMESPACE_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NAMESPACE_TYPE_OBJECT_MANAGER_CLIENT, namespaceObjectManagerClientClass))
#define NAMESPACE_OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NAMESPACE_TYPE_OBJECT_MANAGER_CLIENT, namespaceObjectManagerClientClass))
#define NAMESPACE_IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NAMESPACE_TYPE_OBJECT_MANAGER_CLIENT))
#define NAMESPACE_IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NAMESPACE_TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _namespaceObjectManagerClient namespaceObjectManagerClient;
typedef struct _namespaceObjectManagerClientClass namespaceObjectManagerClientClass;
typedef struct _namespaceObjectManagerClientPrivate namespaceObjectManagerClientPrivate;

struct _namespaceObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  namespaceObjectManagerClientPrivate *priv;
};

struct _namespaceObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (namespaceObjectManagerClient, g_object_unref)
#endif

GType namespace_object_manager_client_get_type (void) G_GNUC_CONST;

GType namespace_object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void namespace_object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *namespace_object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *namespace_object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void namespace_object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *namespace_object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *namespace_object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __GEN_H__ */