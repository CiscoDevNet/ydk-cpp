#ifndef _CISCO_IOS_XR_PPP_MA_SSRP_CFG_
#define _CISCO_IOS_XR_PPP_MA_SSRP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ppp_ma_ssrp_cfg {

class Ssrp : public Entity
{
    public:
        Ssrp();
        ~Ssrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Profiles; //type: Ssrp::Profiles

        std::shared_ptr<Cisco_IOS_XR_ppp_ma_ssrp_cfg::Ssrp::Profiles> profiles;


}; // Ssrp


class Ssrp::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Profile; //type: Ssrp::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ppp_ma_ssrp_cfg::Ssrp::Profiles::Profile> > profile;


}; // Ssrp::Profiles


class Ssrp::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf max_hops; //type: uint32
        YLeaf peer_ipv4_address; //type: string



}; // Ssrp::Profiles::Profile


}
}

#endif /* _CISCO_IOS_XR_PPP_MA_SSRP_CFG_ */
