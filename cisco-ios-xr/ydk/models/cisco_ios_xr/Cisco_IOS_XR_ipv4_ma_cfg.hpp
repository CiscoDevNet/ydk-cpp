#ifndef _CISCO_IOS_XR_IPV4_MA_CFG_
#define _CISCO_IOS_XR_IPV4_MA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ma_cfg {

class Ipv4NetworkGlobal : public Entity
{
    public:
        Ipv4NetworkGlobal();
        ~Ipv4NetworkGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf source_route; //type: boolean
        YLeaf reassemble_max_packets; //type: uint32
        YLeaf reassemble_time_out; //type: uint32
        class Unnumbered; //type: Ipv4NetworkGlobal::Unnumbered
        class Qppb; //type: Ipv4NetworkGlobal::Qppb

        std::shared_ptr<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Qppb> qppb;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Unnumbered> unnumbered;
        
}; // Ipv4NetworkGlobal


class Ipv4NetworkGlobal::Unnumbered : public Entity
{
    public:
        Unnumbered();
        ~Unnumbered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mpls; //type: Ipv4NetworkGlobal::Unnumbered::Mpls

        std::shared_ptr<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Unnumbered::Mpls> mpls;
        
}; // Ipv4NetworkGlobal::Unnumbered


class Ipv4NetworkGlobal::Unnumbered::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Te; //type: Ipv4NetworkGlobal::Unnumbered::Mpls::Te

        std::shared_ptr<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Unnumbered::Mpls::Te> te;
        
}; // Ipv4NetworkGlobal::Unnumbered::Mpls


class Ipv4NetworkGlobal::Unnumbered::Mpls::Te : public Entity
{
    public:
        Te();
        ~Te();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string

}; // Ipv4NetworkGlobal::Unnumbered::Mpls::Te


class Ipv4NetworkGlobal::Qppb : public Entity
{
    public:
        Qppb();
        ~Qppb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: Ipv4QppbEnum
        YLeaf destination; //type: Ipv4QppbEnum

}; // Ipv4NetworkGlobal::Qppb

class SubscriberPta : public Entity
{
    public:
        SubscriberPta();
        ~SubscriberPta();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf tcp_mss_adjust; //type: uint32

}; // SubscriberPta

class Ipv4QppbEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ip_prec;
        static const Enum::YLeaf qos_grp;
        static const Enum::YLeaf both;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MA_CFG_ */

