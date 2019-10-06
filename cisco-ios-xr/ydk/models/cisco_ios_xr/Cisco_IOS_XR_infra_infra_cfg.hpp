#ifndef _CISCO_IOS_XR_INFRA_INFRA_CFG_
#define _CISCO_IOS_XR_INFRA_INFRA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_infra_cfg {

class Banners : public ydk::Entity
{
    public:
        Banners();
        ~Banners();

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

        class Banner; //type: Banners::Banner

        ydk::YList banner;
        
}; // Banners


class Banners::Banner : public ydk::Entity
{
    public:
        Banner();
        ~Banner();

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

        ydk::YLeaf banner_name; //type: Banner
        ydk::YLeaf banner_text; //type: string

}; // Banners::Banner

class Banner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf incoming;
        static const ydk::Enum::YLeaf motd;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf slip_ppp;
        static const ydk::Enum::YLeaf prompt_timeout;

        static int get_enum_value(const std::string & name) {
            if (name == "exec") return 0;
            if (name == "incoming") return 1;
            if (name == "motd") return 2;
            if (name == "login") return 3;
            if (name == "slip-ppp") return 4;
            if (name == "prompt-timeout") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_INFRA_CFG_ */

