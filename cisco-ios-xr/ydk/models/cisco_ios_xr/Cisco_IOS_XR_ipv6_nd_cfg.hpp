#ifndef _CISCO_IOS_XR_IPV6_ND_CFG_
#define _CISCO_IOS_XR_IPV6_ND_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv6_nd_cfg {

class Ipv6Neighbor : public Entity
{
    public:
        Ipv6Neighbor();
        ~Ipv6Neighbor();

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


        YLeaf scavenge_timeout; //type: uint32

        class Neighbors; //type: Ipv6Neighbor::Neighbors

        std::shared_ptr<Cisco_IOS_XR_ipv6_nd_cfg::Ipv6Neighbor::Neighbors> neighbors;


}; // Ipv6Neighbor


class Ipv6Neighbor::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Ipv6Neighbor::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_nd_cfg::Ipv6Neighbor::Neighbors::Neighbor> > neighbor;


}; // Ipv6Neighbor::Neighbors


class Ipv6Neighbor::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf zone; //type: string
        YLeaf mac_address; //type: string
        YLeaf encapsulation; //type: Ipv6SrpEncapsulationEnum



}; // Ipv6Neighbor::Neighbors::Neighbor

class Ipv6NdMonthEnum : public Enum
{
    public:
        static const Enum::YLeaf january;
        static const Enum::YLeaf february;
        static const Enum::YLeaf march;
        static const Enum::YLeaf april;
        static const Enum::YLeaf may;
        static const Enum::YLeaf june;
        static const Enum::YLeaf july;
        static const Enum::YLeaf august;
        static const Enum::YLeaf september;
        static const Enum::YLeaf october;
        static const Enum::YLeaf november;
        static const Enum::YLeaf december;

};

class Ipv6NdRouterPrefEnum : public Enum
{
    public:
        static const Enum::YLeaf high;
        static const Enum::YLeaf medium;
        static const Enum::YLeaf low;

};

class Ipv6SrpEncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf srpa;
        static const Enum::YLeaf srpb;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ND_CFG_ */

