#ifndef _CISCO_IOS_XR_TTY_VTY_CFG_
#define _CISCO_IOS_XR_TTY_VTY_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_vty_cfg {

class Vty : public ydk::Entity
{
    public:
        Vty();
        ~Vty();

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

        class VtyPools; //type: Vty::VtyPools

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_vty_cfg::Vty::VtyPools> vty_pools;
        
}; // Vty


class Vty::VtyPools : public ydk::Entity
{
    public:
        VtyPools();
        ~VtyPools();

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

        class VtyPool; //type: Vty::VtyPools::VtyPool

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tty_vty_cfg::Vty::VtyPools::VtyPool> > vty_pool;
        
}; // Vty::VtyPools


class Vty::VtyPools::VtyPool : public ydk::Entity
{
    public:
        VtyPool();
        ~VtyPool();

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

        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf first_vty; //type: int32
        ydk::YLeaf last_vty; //type: int32
        ydk::YLeaf line_template; //type: string
        ydk::YLeaf none; //type: string

}; // Vty::VtyPools::VtyPool


}
}

#endif /* _CISCO_IOS_XR_TTY_VTY_CFG_ */

