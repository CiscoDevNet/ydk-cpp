#ifndef _CISCO_IOS_XR_IPV4_PIM_CFG_1_
#define _CISCO_IOS_XR_IPV4_PIM_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_cfg_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_cfg {


class Pim::DefaultContext::Ipv4::Paths::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeafList rpf_proxy_address; //type: list of  string

}; // Pim::DefaultContext::Ipv4::Paths::Path


class Pim::DefaultContext::Ipv4::AllowRp : public Entity
{
    public:
        AllowRp();
        ~AllowRp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rp_list_name; //type: string
        YLeaf group_list_name; //type: string

}; // Pim::DefaultContext::Ipv4::AllowRp


class Pim::DefaultContext::Ipv4::Convergence : public Entity
{
    public:
        Convergence();
        ~Convergence();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rpf_conflict_join_delay; //type: uint32
        YLeaf link_down_prune_delay; //type: uint32

}; // Pim::DefaultContext::Ipv4::Convergence


class Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs : public Entity
{
    public:
        CjMulticastOnlyFrrs();
        ~CjMulticastOnlyFrrs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CjMulticastOnlyFrr; //type: Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr> > cj_multicast_only_frr;
        
}; // Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs


class Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr : public Entity
{
    public:
        CjMulticastOnlyFrr();
        ~CjMulticastOnlyFrr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: string
        YLeaf primary; //type: string
        YLeaf backup; //type: string
        YLeaf prefix_length; //type: uint8

}; // Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_CFG_1_ */

