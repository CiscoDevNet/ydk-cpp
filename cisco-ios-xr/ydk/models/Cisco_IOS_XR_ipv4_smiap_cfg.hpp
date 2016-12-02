#ifndef _CISCO_IOS_XR_IPV4_SMIAP_CFG_
#define _CISCO_IOS_XR_IPV4_SMIAP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_smiap_cfg {

class Ipv4Virtual : public Entity
{
    public:
        Ipv4Virtual();
        ~Ipv4Virtual();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value use_as_source_address; //type: empty


    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf_name; //type: string


            class Address : public Entity
            {
                public:
                    Address();
                    ~Address();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value address; //type: string
                    Value netmask; //type: uint8




            }; // Ipv4Virtual::Vrfs::Vrf::Address


                std::unique_ptr<Cisco_IOS_XR_ipv4_smiap_cfg::Ipv4Virtual::Vrfs::Vrf::Address> address; // presence node


        }; // Ipv4Virtual::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_smiap_cfg::Ipv4Virtual::Vrfs::Vrf> > vrf;


    }; // Ipv4Virtual::Vrfs


        std::unique_ptr<Cisco_IOS_XR_ipv4_smiap_cfg::Ipv4Virtual::Vrfs> vrfs;


}; // Ipv4Virtual



}
}

#endif /* _CISCO_IOS_XR_IPV4_SMIAP_CFG_ */

