#ifndef _CISCO_IOS_XR_DOT1X_CFG_
#define _CISCO_IOS_XR_DOT1X_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dot1x_cfg {

class Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Dot1XProfile; //type: Dot1X::Dot1XProfile

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_cfg::Dot1X::Dot1XProfile> > dot1x_profile;
        
}; // Dot1X


class Dot1X::Dot1XProfile : public ydk::Entity
{
    public:
        Dot1XProfile();
        ~Dot1XProfile();

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

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf pae; //type: string
        class Supplicant; //type: Dot1X::Dot1XProfile::Supplicant
        class Authenticator; //type: Dot1X::Dot1XProfile::Authenticator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_cfg::Dot1X::Dot1XProfile::Supplicant> supplicant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_cfg::Dot1X::Dot1XProfile::Authenticator> authenticator;
        
}; // Dot1X::Dot1XProfile


class Dot1X::Dot1XProfile::Supplicant : public ydk::Entity
{
    public:
        Supplicant();
        ~Supplicant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eap_profile; //type: string

}; // Dot1X::Dot1XProfile::Supplicant


class Dot1X::Dot1XProfile::Authenticator : public ydk::Entity
{
    public:
        Authenticator();
        ~Authenticator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timers; //type: Dot1X::Dot1XProfile::Authenticator::Timers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_cfg::Dot1X::Dot1XProfile::Authenticator::Timers> timers;
        
}; // Dot1X::Dot1XProfile::Authenticator


class Dot1X::Dot1XProfile::Authenticator::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReauthTime; //type: Dot1X::Dot1XProfile::Authenticator::Timers::ReauthTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_cfg::Dot1X::Dot1XProfile::Authenticator::Timers::ReauthTime> reauth_time;
        
}; // Dot1X::Dot1XProfile::Authenticator::Timers


class Dot1X::Dot1XProfile::Authenticator::Timers::ReauthTime : public ydk::Entity
{
    public:
        ReauthTime();
        ~ReauthTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server; //type: boolean
        ydk::YLeaf local; //type: uint32

}; // Dot1X::Dot1XProfile::Authenticator::Timers::ReauthTime

class Eap : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class EapProfile; //type: Eap::EapProfile

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_cfg::Eap::EapProfile> > eap_profile;
        
}; // Eap


class Eap::EapProfile : public ydk::Entity
{
    public:
        EapProfile();
        ~EapProfile();

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

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf identity; //type: string
        class Eaptls; //type: Eap::EapProfile::Eaptls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dot1x_cfg::Eap::EapProfile::Eaptls> eaptls;
        
}; // Eap::EapProfile


class Eap::EapProfile::Eaptls : public ydk::Entity
{
    public:
        Eaptls();
        ~Eaptls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pki_trustpoint; //type: string

}; // Eap::EapProfile::Eaptls


}
}

#endif /* _CISCO_IOS_XR_DOT1X_CFG_ */

