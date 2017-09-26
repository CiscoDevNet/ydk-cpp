#ifndef _CISCO_IOS_XE_NATIVE_10_
#define _CISCO_IOS_XE_NATIVE_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_9.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk : public ydk::Entity
{
    public:
        Psk();
        ~Psk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User : public ydk::Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AnyconnectEap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap
        class Cert; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert
        class Eap; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap
        class Psk; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap> anyconnect_eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert> cert;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap> eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk> psk;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap : public ydk::Entity
{
    public:
        AnyconnectEap();
        ~AnyconnectEap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cached; //type: empty
        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert : public ydk::Entity
{
    public:
        Cert();
        ~Cert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cached; //type: empty
        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk : public ydk::Entity
{
    public:
        Psk();
        ~Psk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cached; //type: empty
        class List; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List> > list;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf local; //type: empty
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List


class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password


class Native::Crypto::Ikev2::Profile::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Local; //type: Native::Crypto::Ikev2::Profile::Authentication::Local
        class Remote; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local> local;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote> remote;
        
}; // Native::Crypto::Ikev2::Profile::Authentication


class Native::Crypto::Ikev2::Profile::Authentication::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ecdsa_sig; //type: empty
        ydk::YLeaf rsa_sig; //type: empty
        class Eap; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap
        class PreShare; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap> eap; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare> pre_share; // presence node
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gtc; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc
        class Md5; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5
        class Mschapv2; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc> gtc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5> md5;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2> mschapv2;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc : public ydk::Entity
{
    public:
        Gtc();
        ~Gtc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2 : public ydk::Entity
{
    public:
        Mschapv2();
        ~Mschapv2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2


class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password


class Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare : public ydk::Entity
{
    public:
        PreShare();
        ~PreShare();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key> key;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare


class Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key


class Native::Crypto::Ikev2::Profile::Authentication::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ecdsa_sig; //type: empty
        ydk::YLeaf rsa_sig; //type: empty
        class AnyconnectEap; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap
        class Eap; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap
        class PreShare; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap> anyconnect_eap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap> eap; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare> pre_share; // presence node
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Remote


class Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap : public ydk::Entity
{
    public:
        AnyconnectEap();
        ~AnyconnectEap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aggregate; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate> aggregate; // presence node
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap


class Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate : public ydk::Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cert_request; //type: empty

}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate


class Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap : public ydk::Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_identity; //type: empty
        ydk::YLeaf timeout; //type: uint8

}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap


class Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare : public ydk::Entity
{
    public:
        PreShare();
        ~PreShare();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key> key;
        
}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare


class Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key


class Native::Crypto::Ikev2::Profile::ConfigExchange : public ydk::Entity
{
    public:
        ConfigExchange();
        ~ConfigExchange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf request; //type: empty
        ydk::YLeaf set; //type: Set
        class Set;

}; // Native::Crypto::Ikev2::Profile::ConfigExchange


class Native::Crypto::Ikev2::Profile::Dpd : public ydk::Entity
{
    public:
        Dpd();
        ~Dpd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf retry; //type: uint8
        ydk::YLeaf query; //type: Query
        class Query;

}; // Native::Crypto::Ikev2::Profile::Dpd


class Native::Crypto::Ikev2::Profile::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Local; //type: Native::Crypto::Ikev2::Profile::Identity::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Identity::Local> local;
        
}; // Native::Crypto::Ikev2::Profile::Identity


class Native::Crypto::Ikev2::Profile::Identity::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf dn; //type: empty
        ydk::YLeaf email; //type: string
        ydk::YLeaf fqdn; //type: string
        ydk::YLeaf key_id; //type: string

}; // Native::Crypto::Ikev2::Profile::Identity::Local


class Native::Crypto::Ikev2::Profile::InitialContact : public ydk::Entity
{
    public:
        InitialContact();
        ~InitialContact();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf force; //type: empty

}; // Native::Crypto::Ikev2::Profile::InitialContact


class Native::Crypto::Ikev2::Profile::Keyring : public ydk::Entity
{
    public:
        Keyring();
        ~Keyring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: string
        class Aaa; //type: Native::Crypto::Ikev2::Profile::Keyring::Aaa

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Keyring::Aaa> > aaa;
        
}; // Native::Crypto::Ikev2::Profile::Keyring


class Native::Crypto::Ikev2::Profile::Keyring::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf name_mangler; //type: string
        class Password; //type: Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password> password;
        
}; // Native::Crypto::Ikev2::Profile::Keyring::Aaa


class Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password


class Native::Crypto::Ikev2::Profile::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf certificate; //type: empty

}; // Native::Crypto::Ikev2::Profile::Lifetime


class Native::Crypto::Ikev2::Profile::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf certificate; //type: string
        class Address; //type: Native::Crypto::Ikev2::Profile::Match::Address
        class Fvrf; //type: Native::Crypto::Ikev2::Profile::Match::Fvrf
        class Identity; //type: Native::Crypto::Ikev2::Profile::Match::Identity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Fvrf> fvrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity> identity;
        
}; // Native::Crypto::Ikev2::Profile::Match


class Native::Crypto::Ikev2::Profile::Match::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Local; //type: Native::Crypto::Ikev2::Profile::Match::Address::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Address::Local> local;
        
}; // Native::Crypto::Ikev2::Profile::Match::Address


class Native::Crypto::Ikev2::Profile::Match::Address::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf interface; //type: string

}; // Native::Crypto::Ikev2::Profile::Match::Address::Local


class Native::Crypto::Ikev2::Profile::Match::Fvrf : public ydk::Entity
{
    public:
        Fvrf();
        ~Fvrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf any; //type: empty

}; // Native::Crypto::Ikev2::Profile::Match::Fvrf


class Native::Crypto::Ikev2::Profile::Match::Identity : public ydk::Entity
{
    public:
        Identity();
        ~Identity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Remote; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote> remote;
        
}; // Native::Crypto::Ikev2::Profile::Match::Identity


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf key_id; //type: string
        class Address; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address
        class Email; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email
        class Fqdn; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email> email;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn> fqdn;
        
}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList ipv6_prefix; //type: list of  string
        class Ipv4; //type: Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4> > ipv4;
        
}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Address::Ipv4


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email : public ydk::Entity
{
    public:
        Email();
        ~Email();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Email


class Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn : public ydk::Entity
{
    public:
        Fqdn();
        ~Fqdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf domain; //type: string

}; // Native::Crypto::Ikev2::Profile::Match::Identity::Remote::Fqdn


class Native::Crypto::Ikev2::Profile::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keepalive; //type: uint16

}; // Native::Crypto::Ikev2::Profile::Nat


class Native::Crypto::Ikev2::Profile::Pki : public ydk::Entity
{
    public:
        Pki();
        ~Pki();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trustpoint; //type: string
        ydk::YLeaf use; //type: Use
        class Use;

}; // Native::Crypto::Ikev2::Profile::Pki


class Native::Crypto::Ikev2::Profile::Reconnect : public ydk::Entity
{
    public:
        Reconnect();
        ~Reconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Crypto::Ikev2::Profile::Reconnect


class Native::Crypto::Ikev2::Profile::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gateway; //type: Native::Crypto::Ikev2::Profile::Redirect::Gateway

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Profile::Redirect::Gateway> gateway;
        
}; // Native::Crypto::Ikev2::Profile::Redirect


class Native::Crypto::Ikev2::Profile::Redirect::Gateway : public ydk::Entity
{
    public:
        Gateway();
        ~Gateway();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth; //type: empty

}; // Native::Crypto::Ikev2::Profile::Redirect::Gateway


class Native::Crypto::Ikev2::Profile::VirtualTemplate : public ydk::Entity
{
    public:
        VirtualTemplate();
        ~VirtualTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Crypto::Ikev2::Profile::VirtualTemplate


class Native::Crypto::Ikev2::Proposal : public ydk::Entity
{
    public:
        Proposal();
        ~Proposal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Encryption; //type: Native::Crypto::Ikev2::Proposal::Encryption
        class Group; //type: Native::Crypto::Ikev2::Proposal::Group
        class Integrity; //type: Native::Crypto::Ikev2::Proposal::Integrity
        class Prf; //type: Native::Crypto::Ikev2::Proposal::Prf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal::Encryption> encryption;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal::Integrity> integrity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Proposal::Prf> prf;
        
}; // Native::Crypto::Ikev2::Proposal


class Native::Crypto::Ikev2::Proposal::Encryption : public ydk::Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf en_3des; //type: empty
        ydk::YLeaf aes_cbc_128; //type: empty
        ydk::YLeaf aes_cbc_192; //type: empty
        ydk::YLeaf aes_cbc_256; //type: empty
        ydk::YLeaf aes_gcm_128; //type: empty
        ydk::YLeaf aes_gcm_256; //type: empty
        ydk::YLeaf des; //type: empty

}; // Native::Crypto::Ikev2::Proposal::Encryption


class Native::Crypto::Ikev2::Proposal::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf one; //type: empty
        ydk::YLeaf fourteen; //type: empty
        ydk::YLeaf fifteen; //type: empty
        ydk::YLeaf sixteen; //type: empty
        ydk::YLeaf nineteen; //type: empty
        ydk::YLeaf two; //type: empty
        ydk::YLeaf twenty; //type: empty
        ydk::YLeaf twenty_one; //type: empty
        ydk::YLeaf twenty_four; //type: empty
        ydk::YLeaf five; //type: empty

}; // Native::Crypto::Ikev2::Proposal::Group


class Native::Crypto::Ikev2::Proposal::Integrity : public ydk::Entity
{
    public:
        Integrity();
        ~Integrity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: empty
        ydk::YLeaf sha1; //type: empty
        ydk::YLeaf sha256; //type: empty
        ydk::YLeaf sha384; //type: empty
        ydk::YLeaf sha512; //type: empty

}; // Native::Crypto::Ikev2::Proposal::Integrity


class Native::Crypto::Ikev2::Proposal::Prf : public ydk::Entity
{
    public:
        Prf();
        ~Prf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: empty
        ydk::YLeaf sha1; //type: empty
        ydk::YLeaf sha256; //type: empty
        ydk::YLeaf sha384; //type: empty
        ydk::YLeaf sha512; //type: empty

}; // Native::Crypto::Ikev2::Proposal::Prf


class Native::Crypto::Ikev2::Reconnect : public ydk::Entity
{
    public:
        Reconnect();
        ~Reconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf key; //type: uint8
        ydk::YLeaf value_; //type: string
        ydk::YLeaf active; //type: string

}; // Native::Crypto::Ikev2::Reconnect


class Native::Crypto::Ikev2::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf gateway; //type: Gateway
        class Client; //type: Native::Crypto::Ikev2::Redirect::Client

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ikev2::Redirect::Client> client; // presence node
                class Gateway;

}; // Native::Crypto::Ikev2::Redirect


class Native::Crypto::Ikev2::Redirect::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf max_redirects; //type: uint8

}; // Native::Crypto::Ikev2::Redirect::Client


class Native::Crypto::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf df_bit; //type: DfBit
        ydk::YLeaf fragmentation; //type: Fragmentation
        ydk::YLeaf ipv4_deny; //type: Ipv4Deny
        ydk::YLeaf nat_transparency; //type: NatTransparency
        class Optional; //type: Native::Crypto::Ipsec::Optional
        class Profile; //type: Native::Crypto::Ipsec::Profile
        class SecurityAssociation; //type: Native::Crypto::Ipsec::SecurityAssociation
        class TransformSet; //type: Native::Crypto::Ipsec::TransformSet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Optional> optional; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile> > profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation> security_association;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet> > transform_set;
                class DfBit;
        class Fragmentation;
        class Ipv4Deny;
        class NatTransparency;

}; // Native::Crypto::Ipsec


class Native::Crypto::Ipsec::Optional : public ydk::Entity
{
    public:
        Optional();
        ~Optional();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf retry; //type: uint32

}; // Native::Crypto::Ipsec::Optional


class Native::Crypto::Ipsec::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf responder_only; //type: empty
        class Default_; //type: Native::Crypto::Ipsec::Profile::Default_
        class Dialer; //type: Native::Crypto::Ipsec::Profile::Dialer
        class Redundancy; //type: Native::Crypto::Ipsec::Profile::Redundancy
        class Set; //type: Native::Crypto::Ipsec::Profile::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set> set;
        
}; // Native::Crypto::Ipsec::Profile


class Native::Crypto::Ipsec::Profile::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: empty
        ydk::YLeaf redundancy; //type: empty
        ydk::YLeaf responder_only; //type: empty
        class Dialer; //type: Native::Crypto::Ipsec::Profile::Default_::Dialer
        class Set; //type: Native::Crypto::Ipsec::Profile::Default_::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Dialer> dialer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set> set;
        
}; // Native::Crypto::Ipsec::Profile::Default_


class Native::Crypto::Ipsec::Profile::Default_::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::Ipsec::Profile::Default_::Dialer


class Native::Crypto::Ipsec::Profile::Default_::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: empty
        ydk::YLeaf identity; //type: empty
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: empty
        ydk::YLeaf mixed_mode; //type: empty
        ydk::YLeaf transform_set; //type: empty
        class Pfs; //type: Native::Crypto::Ipsec::Profile::Default_::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation
        class SecurityPolicy; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute> reverse_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation> security_association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy> security_policy;
        
}; // Native::Crypto::Ipsec::Profile::Default_::Set


class Native::Crypto::Ipsec::Profile::Default_::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Ipsec::Profile::Default_::Set::Pfs


class Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Ipsec::Profile::Default_::Set::ReverseRoute


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: empty
        ydk::YLeaf ecn; //type: empty
        ydk::YLeaf level; //type: Level
        class Dummy; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy> dummy; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay> replay;
                class Level;

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Dummy


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: empty
        ydk::YLeaf kilobytes; //type: empty
        ydk::YLeaf seconds; //type: empty

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Lifetime


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf window_size; //type: empty

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Replay


class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy : public ydk::Entity
{
    public:
        SecurityPolicy();
        ~SecurityPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32

}; // Native::Crypto::Ipsec::Profile::Default_::Set::SecurityPolicy


class Native::Crypto::Ipsec::Profile::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pre_classify; //type: empty

}; // Native::Crypto::Ipsec::Profile::Dialer


class Native::Crypto::Ipsec::Profile::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf stateful; //type: empty

}; // Native::Crypto::Ipsec::Profile::Redundancy


class Native::Crypto::Ipsec::Profile::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string
        ydk::YLeaf identity; //type: string
        ydk::YLeaf ikev2_profile; //type: string
        ydk::YLeaf isakmp_profile; //type: string
        ydk::YLeaf mixed_mode; //type: empty
        ydk::YLeafList transform_set; //type: list of  string
        class Peer; //type: Native::Crypto::Ipsec::Profile::Set::Peer
        class Pfs; //type: Native::Crypto::Ipsec::Profile::Set::Pfs
        class ReverseRoute; //type: Native::Crypto::Ipsec::Profile::Set::ReverseRoute
        class SecurityAssociation; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation
        class SecurityPolicy; //type: Native::Crypto::Ipsec::Profile::Set::SecurityPolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::Pfs> pfs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::ReverseRoute> reverse_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation> security_association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityPolicy> security_policy;
        
}; // Native::Crypto::Ipsec::Profile::Set


class Native::Crypto::Ipsec::Profile::Set::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf dynamic; //type: empty

}; // Native::Crypto::Ipsec::Profile::Set::Peer


class Native::Crypto::Ipsec::Profile::Set::Pfs : public ydk::Entity
{
    public:
        Pfs();
        ~Pfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: Group
        class Group;

}; // Native::Crypto::Ipsec::Profile::Set::Pfs


class Native::Crypto::Ipsec::Profile::Set::ReverseRoute : public ydk::Entity
{
    public:
        ReverseRoute();
        ~ReverseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf tag; //type: uint64

}; // Native::Crypto::Ipsec::Profile::Set::ReverseRoute


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dfbit; //type: Dfbit
        ydk::YLeaf ecn; //type: Ecn
        ydk::YLeaf level; //type: Level
        class Dummy; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy
        class IdleTimeContainer; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer
        class Lifetime; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer> idle_time_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay> replay;
                class Dfbit;
        class Ecn;
        class Level;

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pps; //type: uint8
        ydk::YLeaf seconds; //type: uint16

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dummy


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer : public ydk::Entity
{
    public:
        IdleTimeContainer();
        ~IdleTimeContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf default_; //type: empty

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::IdleTimeContainer


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: uint8
        ydk::YLeaf kilobytes; //type: one of uint64, enumeration
        ydk::YLeaf seconds; //type: uint64
        class Kilobytes;

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime


class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay


class Native::Crypto::Ipsec::Profile::Set::SecurityPolicy : public ydk::Entity
{
    public:
        SecurityPolicy();
        ~SecurityPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32

}; // Native::Crypto::Ipsec::Profile::Set::SecurityPolicy


class Native::Crypto::Ipsec::SecurityAssociation : public ydk::Entity
{
    public:
        SecurityAssociation();
        ~SecurityAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ecn; //type: Ecn
        ydk::YLeaf idle_time; //type: uint32
        class Dummy; //type: Native::Crypto::Ipsec::SecurityAssociation::Dummy
        class Lifetime; //type: Native::Crypto::Ipsec::SecurityAssociation::Lifetime
        class Replay; //type: Native::Crypto::Ipsec::SecurityAssociation::Replay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation::Dummy> dummy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::SecurityAssociation::Replay> replay;
                class Ecn;

}; // Native::Crypto::Ipsec::SecurityAssociation


class Native::Crypto::Ipsec::SecurityAssociation::Dummy : public ydk::Entity
{
    public:
        Dummy();
        ~Dummy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pps; //type: uint8
        ydk::YLeaf seconds; //type: uint16

}; // Native::Crypto::Ipsec::SecurityAssociation::Dummy


class Native::Crypto::Ipsec::SecurityAssociation::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf days; //type: uint8
        ydk::YLeaf kilobytes; //type: one of uint64, enumeration
        ydk::YLeaf seconds; //type: uint64
        class Kilobytes;

}; // Native::Crypto::Ipsec::SecurityAssociation::Lifetime


class Native::Crypto::Ipsec::SecurityAssociation::Replay : public ydk::Entity
{
    public:
        Replay();
        ~Replay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf window_size; //type: WindowSize
        class WindowSize;

}; // Native::Crypto::Ipsec::SecurityAssociation::Replay


class Native::Crypto::Ipsec::TransformSet : public ydk::Entity
{
    public:
        TransformSet();
        ~TransformSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tag; //type: string
        ydk::YLeaf ah_hmac; //type: AhHmac
        ydk::YLeaf comp_lzs; //type: empty
        ydk::YLeaf esp; //type: Esp
        ydk::YLeaf key_bit; //type: KeyBit
        ydk::YLeaf esp_hmac; //type: EspHmac
        class Default_; //type: Native::Crypto::Ipsec::TransformSet::Default_
        class Mode; //type: Native::Crypto::Ipsec::TransformSet::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Mode> mode;
                class AhHmac;
        class Esp;
        class KeyBit;
        class EspHmac;

}; // Native::Crypto::Ipsec::TransformSet


class Native::Crypto::Ipsec::TransformSet::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: empty

}; // Native::Crypto::Ipsec::TransformSet::Default_


class Native::Crypto::Ipsec::TransformSet::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: empty
        class Transport; //type: Native::Crypto::Ipsec::TransformSet::Mode::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Ipsec::TransformSet::Mode::Transport> transport; // presence node
        
}; // Native::Crypto::Ipsec::TransformSet::Mode


class Native::Crypto::Ipsec::TransformSet::Mode::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf require; //type: empty

}; // Native::Crypto::Ipsec::TransformSet::Mode::Transport


class Native::Crypto::Isakmp : public ydk::Entity
{
    public:
        Isakmp();
        ~Isakmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf aggressive_mode; //type: AggressiveMode
        ydk::YLeaf disconnect_revoked_peers; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf fragmentation; //type: empty
        ydk::YLeaf identity; //type: Identity
        ydk::YLeaf invalid_spi_recovery; //type: empty
        class Client; //type: Native::Crypto::Isakmp::Client
        class Default_; //type: Native::Crypto::Isakmp::Default_
        class Keepalive; //type: Native::Crypto::Isakmp::Keepalive
        class Key; //type: Native::Crypto::Isakmp::Key
        class Nat; //type: Native::Crypto::Isakmp::Nat
        class Peer; //type: Native::Crypto::Isakmp::Peer
        class Policy; //type: Native::Crypto::Isakmp::Policy
        class Profile; //type: Native::Crypto::Isakmp::Profile
        class Xauth; //type: Native::Crypto::Isakmp::Xauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer> peer;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Policy> > policy;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Profile> > profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Xauth> xauth;
                class AggressiveMode;
        class Identity;

}; // Native::Crypto::Isakmp


class Native::Crypto::Isakmp::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Configuration; //type: Native::Crypto::Isakmp::Client::Configuration
        class Firewall; //type: Native::Crypto::Isakmp::Client::Firewall

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration> configuration;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall> > firewall;
        
}; // Native::Crypto::Isakmp::Client


class Native::Crypto::Isakmp::Client::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf browser_proxy; //type: string
        class AddressPool; //type: Native::Crypto::Isakmp::Client::Configuration::AddressPool
        class Group; //type: Native::Crypto::Isakmp::Client::Configuration::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::AddressPool> address_pool;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group> > group;
        
}; // Native::Crypto::Isakmp::Client::Configuration


class Native::Crypto::Isakmp::Client::Configuration::AddressPool : public ydk::Entity
{
    public:
        AddressPool();
        ~AddressPool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf local; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::AddressPool


class Native::Crypto::Isakmp::Client::Configuration::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf access_restrict; //type: string
        ydk::YLeaf acl; //type: one of string, uint16
        ydk::YLeaf backup_gateway; //type: string
        ydk::YLeaf browser_proxy; //type: string
        ydk::YLeaf domain; //type: string
        ydk::YLeaf group_lock; //type: empty
        ydk::YLeaf include_local_lan; //type: empty
        ydk::YLeaf max_logins; //type: uint8
        ydk::YLeaf max_users; //type: uint32
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf pfs; //type: empty
        ydk::YLeaf pool; //type: string
        ydk::YLeaf save_password; //type: empty
        ydk::YLeaf smartcard_removal_disconnect; //type: empty
        ydk::YLeaf split_dns; //type: string
        class AutoUpdate; //type: Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate
        class Configuration_; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_
        class Crypto_; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_
        class Dhcp; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp
        class Dns; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Dns
        class Firewall; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Firewall
        class Key; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Key
        class Wins; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Wins

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate> auto_update;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_> configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Firewall> firewall;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Key> key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Wins> wins;
        
}; // Native::Crypto::Isakmp::Client::Configuration::Group


class Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate : public ydk::Entity
{
    public:
        AutoUpdate();
        ~AutoUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client; //type: string
        ydk::YLeaf url; //type: string
        ydk::YLeaf rev; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::AutoUpdate


class Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_ : public ydk::Entity
{
    public:
        Configuration_();
        ~Configuration_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf url; //type: Url
        ydk::YLeaf version; //type: uint32
        class Url;

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_


class Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_ : public ydk::Entity
{
    public:
        Crypto_();
        ~Crypto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aaa; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa> aaa;
        
}; // Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_


class Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attribute; //type: Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute> attribute;
        
}; // Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa


class Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Crypto_::Aaa::Attribute


class Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf giaddr; //type: string
        ydk::YLeaf server; //type: string
        ydk::YLeaf timeout; //type: uint8

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Dhcp


class Native::Crypto::Isakmp::Client::Configuration::Group::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Dns


class Native::Crypto::Isakmp::Client::Configuration::Group::Firewall : public ydk::Entity
{
    public:
        Firewall();
        ~Firewall();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf are_u_there; //type: empty
        ydk::YLeaf policy; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Firewall


class Native::Crypto::Isakmp::Client::Configuration::Group::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Key


class Native::Crypto::Isakmp::Client::Configuration::Group::Wins : public ydk::Entity
{
    public:
        Wins();
        ~Wins();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Native::Crypto::Isakmp::Client::Configuration::Group::Wins


class Native::Crypto::Isakmp::Client::Firewall : public ydk::Entity
{
    public:
        Firewall();
        ~Firewall();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf optional; //type: Optional
        ydk::YLeaf required; //type: Required
        class Policy; //type: Native::Crypto::Isakmp::Client::Firewall::Policy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall::Policy> policy;
                class Optional;
        class Required;

}; // Native::Crypto::Isakmp::Client::Firewall


class Native::Crypto::Isakmp::Client::Firewall::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf check_presence; //type: empty
        class CentralPolicyPush; //type: Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush> central_policy_push;
        
}; // Native::Crypto::Isakmp::Client::Firewall::Policy


class Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush : public ydk::Entity
{
    public:
        CentralPolicyPush();
        ~CentralPolicyPush();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessList; //type: Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList> access_list;
        
}; // Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush


class Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf acl; //type: one of string, uint16
        class Direction;

}; // Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList


class Native::Crypto::Isakmp::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf policy; //type: empty

}; // Native::Crypto::Isakmp::Default_


class Native::Crypto::Isakmp::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf retry_number; //type: uint8
        ydk::YLeaf send; //type: Send
        class Send;

}; // Native::Crypto::Isakmp::Keepalive


class Native::Crypto::Isakmp::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class KeyAddress; //type: Native::Crypto::Isakmp::Key::KeyAddress
        class KeyHost; //type: Native::Crypto::Isakmp::Key::KeyHost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress> key_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyHost> key_host;
        
}; // Native::Crypto::Isakmp::Key


class Native::Crypto::Isakmp::Key::KeyAddress : public ydk::Entity
{
    public:
        KeyAddress();
        ~KeyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Addr4Container; //type: Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container
        class Addr6Container; //type: Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container> addr4_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container> addr6_container;
                class Encryption;

}; // Native::Crypto::Isakmp::Key::KeyAddress


class Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container : public ydk::Entity
{
    public:
        Addr4Container();
        ~Addr4Container();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf no_xauth; //type: empty

}; // Native::Crypto::Isakmp::Key::KeyAddress::Addr4Container


class Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container : public ydk::Entity
{
    public:
        Addr6Container();
        ~Addr6Container();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Address; //type: Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address> address;
        
}; // Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container


class Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf no_xauth; //type: empty

}; // Native::Crypto::Isakmp::Key::KeyAddress::Addr6Container::Address


class Native::Crypto::Isakmp::Key::KeyHost : public ydk::Entity
{
    public:
        KeyHost();
        ~KeyHost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class HostContainer; //type: Native::Crypto::Isakmp::Key::KeyHost::HostContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Key::KeyHost::HostContainer> host_container;
                class Encryption;

}; // Native::Crypto::Isakmp::Key::KeyHost


class Native::Crypto::Isakmp::Key::KeyHost::HostContainer : public ydk::Entity
{
    public:
        HostContainer();
        ~HostContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hostname; //type: string
        ydk::YLeaf no_xauth; //type: empty

}; // Native::Crypto::Isakmp::Key::KeyHost::HostContainer


class Native::Crypto::Isakmp::Nat : public ydk::Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf keepalive; //type: uint16

}; // Native::Crypto::Isakmp::Nat


class Native::Crypto::Isakmp::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4Addr; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr
        class Ipv6Addr; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr
        class Hostname; //type: Native::Crypto::Isakmp::Peer::Hostname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname> > hostname;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr> ipv4_addr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr> ipv6_addr;
        
}; // Native::Crypto::Isakmp::Peer


class Native::Crypto::Isakmp::Peer::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf description; //type: string
        class Set; //type: Native::Crypto::Isakmp::Peer::Hostname::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set> set;
        
}; // Native::Crypto::Isakmp::Peer::Hostname


class Native::Crypto::Isakmp::Peer::Hostname::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AggressiveMode; //type: Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode> aggressive_mode;
        
}; // Native::Crypto::Isakmp::Peer::Hostname::Set


class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode : public ydk::Entity
{
    public:
        AggressiveMode();
        ~AggressiveMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientEndpoint; //type: Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint
        class Password; //type: Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint> client_endpoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password> password;
        
}; // Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode


class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint : public ydk::Entity
{
    public:
        ClientEndpoint();
        ~ClientEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fqdn; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf user_fqdn; //type: string

}; // Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::ClientEndpoint


class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password


class Native::Crypto::Isakmp::Peer::Ipv4Addr : public ydk::Entity
{
    public:
        Ipv4Addr();
        ~Ipv4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Address; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address> > address;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf description; //type: string
        class Set; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set> set;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AggressiveMode; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode> aggressive_mode;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode : public ydk::Entity
{
    public:
        AggressiveMode();
        ~AggressiveMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientEndpoint; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint
        class Password; //type: Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint> client_endpoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password> password;
        
}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint : public ydk::Entity
{
    public:
        ClientEndpoint();
        ~ClientEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fqdn; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf user_fqdn; //type: string

}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::ClientEndpoint


class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password


class Native::Crypto::Isakmp::Peer::Ipv6Addr : public ydk::Entity
{
    public:
        Ipv6Addr();
        ~Ipv6Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Address; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address> > address;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf description; //type: string
        class Set; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set> set;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AggressiveMode; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode> aggressive_mode;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set


class Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode : public ydk::Entity
{
    public:
        AggressiveMode();
        ~AggressiveMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClientEndpoint; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint
        class Password; //type: Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::ClientEndpoint> client_endpoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode::Password> password;
        
}; // Native::Crypto::Isakmp::Peer::Ipv6Addr::Address::Set::AggressiveMode

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::ConfigExchange::Set : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf send;

};

class Native::Crypto::Ikev2::Profile::Dpd::Query : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_demand;
        static const ydk::Enum::YLeaf periodic;

};

class Native::Crypto::Ikev2::Profile::Keyring::Aaa::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Ikev2::Profile::Pki::Use : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sign;
        static const ydk::Enum::YLeaf verify;

};

class Native::Crypto::Ikev2::Profile::VirtualTemplate::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;

};

class Native::Crypto::Ikev2::Redirect::Gateway : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf init;

};

class Native::Crypto::Ipsec::DfBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Crypto::Ipsec::Fragmentation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf after_encryption;
        static const ydk::Enum::YLeaf before_encryption;

};

class Native::Crypto::Ipsec::Ipv4Deny : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf jump;

};

class Native::Crypto::Ipsec::NatTransparency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spi_matching;
        static const ydk::Enum::YLeaf udp_encapsulation;

};

class Native::Crypto::Ipsec::Profile::Default_::Set::SecurityAssociation::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_host;

};

class Native::Crypto::Ipsec::Profile::Set::Pfs::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf group1;
        static const ydk::Enum::YLeaf group14;
        static const ydk::Enum::YLeaf group15;
        static const ydk::Enum::YLeaf group16;
        static const ydk::Enum::YLeaf group19;
        static const ydk::Enum::YLeaf group2;
        static const ydk::Enum::YLeaf group20;
        static const ydk::Enum::YLeaf group21;
        static const ydk::Enum::YLeaf group24;
        static const ydk::Enum::YLeaf group5;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Dfbit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Ecn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf propagate;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_host;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Lifetime::Kilobytes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class Native::Crypto::Ipsec::Profile::Set::SecurityAssociation::Replay::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

};

class Native::Crypto::Ipsec::SecurityAssociation::Ecn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf propagate;

};

class Native::Crypto::Ipsec::SecurityAssociation::Lifetime::Kilobytes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class Native::Crypto::Ipsec::SecurityAssociation::Replay::WindowSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1024;
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_256;
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_64;

};

class Native::Crypto::Ipsec::TransformSet::AhHmac : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ah_md5_hmac;
        static const ydk::Enum::YLeaf ah_sha_hmac;
        static const ydk::Enum::YLeaf ah_sha256_hmac;
        static const ydk::Enum::YLeaf ah_sha384_hmac;
        static const ydk::Enum::YLeaf ah_sha512_hmac;

};

class Native::Crypto::Ipsec::TransformSet::Esp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf esp_3des;
        static const ydk::Enum::YLeaf esp_aes;
        static const ydk::Enum::YLeaf esp_des;
        static const ydk::Enum::YLeaf esp_gcm;
        static const ydk::Enum::YLeaf esp_gmac;
        static const ydk::Enum::YLeaf esp_null;
        static const ydk::Enum::YLeaf esp_seal;

};

class Native::Crypto::Ipsec::TransformSet::KeyBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_128;
        static const ydk::Enum::YLeaf Y_192;
        static const ydk::Enum::YLeaf Y_256;

};

class Native::Crypto::Ipsec::TransformSet::EspHmac : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf esp_md5_hmac;
        static const ydk::Enum::YLeaf esp_sha_hmac;
        static const ydk::Enum::YLeaf esp_sha256_hmac;
        static const ydk::Enum::YLeaf esp_sha384_hmac;
        static const ydk::Enum::YLeaf esp_sha512_hmac;

};

class Native::Crypto::Isakmp::AggressiveMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class Native::Crypto::Isakmp::Identity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address;
        static const ydk::Enum::YLeaf dn;
        static const ydk::Enum::YLeaf hostname;

};

class Native::Crypto::Isakmp::Client::Configuration::Group::Configuration_::Url : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bootflash__COLON__;
        static const ydk::Enum::YLeaf cns__COLON__;
        static const ydk::Enum::YLeaf flash__COLON__;
        static const ydk::Enum::YLeaf ftp__COLON__;
        static const ydk::Enum::YLeaf http__COLON__;
        static const ydk::Enum::YLeaf https__COLON__;
        static const ydk::Enum::YLeaf null__COLON__;
        static const ydk::Enum::YLeaf nvram__COLON__;
        static const ydk::Enum::YLeaf pram__COLON__;
        static const ydk::Enum::YLeaf rcp__COLON__;
        static const ydk::Enum::YLeaf scp__COLON__;
        static const ydk::Enum::YLeaf system__COLON__;
        static const ydk::Enum::YLeaf tar__COLON__;
        static const ydk::Enum::YLeaf tftp__COLON__;
        static const ydk::Enum::YLeaf tmpsys__COLON__;

};

class Native::Crypto::Isakmp::Client::Configuration::Group::Key::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Client::Firewall::Optional : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_integrated_client_firewall;
        static const ydk::Enum::YLeaf cisco_security_agent;
        static const ydk::Enum::YLeaf zonelabs_zonealarm;
        static const ydk::Enum::YLeaf zonelabs_zonealarmpro;

};

class Native::Crypto::Isakmp::Client::Firewall::Required : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_integrated_client_firewall;
        static const ydk::Enum::YLeaf cisco_security_agent;
        static const ydk::Enum::YLeaf zonelabs_zonealarm;
        static const ydk::Enum::YLeaf zonelabs_zonealarmpro;

};

class Native::Crypto::Isakmp::Client::Firewall::Policy::CentralPolicyPush::AccessList::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Crypto::Isakmp::Keepalive::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_demand;
        static const ydk::Enum::YLeaf periodic;

};

class Native::Crypto::Isakmp::Key::KeyAddress::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Key::KeyHost::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Peer::Hostname::Set::AggressiveMode::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};

class Native::Crypto::Isakmp::Peer::Ipv4Addr::Address::Set::AggressiveMode::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_10_ */

