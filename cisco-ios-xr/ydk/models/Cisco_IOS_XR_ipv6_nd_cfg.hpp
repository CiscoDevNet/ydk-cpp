#ifndef _CISCO_IOS_XR_IPV6_ND_CFG_
#define _CISCO_IOS_XR_IPV6_ND_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value scavenge_timeout; //type: uint32


    class Neighbors : public Entity
    {
        public:
            Neighbors();
            ~Neighbors();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Neighbor : public Entity
        {
            public:
                Neighbor();
                ~Neighbor();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value neighbor_address; //type: string
                Value interface_name; //type: string
                Value zone; //type: string
                Value mac_address; //type: string
                Value encapsulation; //type: Ipv6SrpEncapsulationEnum


                class Ipv6SrpEncapsulationEnum;


        }; // Ipv6Neighbor::Neighbors::Neighbor


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_cfg::Ipv6Neighbor::Neighbors::Neighbor> > neighbor;


    }; // Ipv6Neighbor::Neighbors


        std::unique_ptr<Cisco_IOS_XR_ipv6_nd_cfg::Ipv6Neighbor::Neighbors> neighbors;


}; // Ipv6Neighbor


class Ipv6NdMonthEnum : public Enum
{
    public:
        static const Enum::Value january;
        static const Enum::Value february;
        static const Enum::Value march;
        static const Enum::Value april;
        static const Enum::Value may;
        static const Enum::Value june;
        static const Enum::Value july;
        static const Enum::Value august;
        static const Enum::Value september;
        static const Enum::Value october;
        static const Enum::Value november;
        static const Enum::Value december;

};

class Ipv6NdRouterPrefEnum : public Enum
{
    public:
        static const Enum::Value high;
        static const Enum::Value medium;
        static const Enum::Value low;

};

class Ipv6SrpEncapsulationEnum : public Enum
{
    public:
        static const Enum::Value srpa;
        static const Enum::Value srpb;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ND_CFG_ */

