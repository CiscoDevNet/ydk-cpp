#ifndef _CISCO_IOS_XR_ETHERNET_LLDP_CFG_
#define _CISCO_IOS_XR_ETHERNET_LLDP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_lldp_cfg {

class Lldp : public Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value holdtime; //type: uint32
        Value enable_subintf; //type: boolean
        Value timer; //type: uint32
        Value reinit; //type: uint32
        Value enable; //type: boolean


    class TlvSelect : public Entity
    {
        public:
            TlvSelect();
            ~TlvSelect();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value tlv_select_enter; //type: boolean


        class SystemName : public Entity
        {
            public:
                SystemName();
                ~SystemName();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value disable; //type: boolean




        }; // Lldp::TlvSelect::SystemName


        class PortDescription : public Entity
        {
            public:
                PortDescription();
                ~PortDescription();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value disable; //type: boolean




        }; // Lldp::TlvSelect::PortDescription


        class SystemDescription : public Entity
        {
            public:
                SystemDescription();
                ~SystemDescription();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value disable; //type: boolean




        }; // Lldp::TlvSelect::SystemDescription


        class SystemCapabilities : public Entity
        {
            public:
                SystemCapabilities();
                ~SystemCapabilities();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value disable; //type: boolean




        }; // Lldp::TlvSelect::SystemCapabilities


        class ManagementAddress : public Entity
        {
            public:
                ManagementAddress();
                ~ManagementAddress();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value disable; //type: boolean




        }; // Lldp::TlvSelect::ManagementAddress


            std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::ManagementAddress> management_address;
            std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::PortDescription> port_description;
            std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::SystemCapabilities> system_capabilities;
            std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::SystemDescription> system_description;
            std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect::SystemName> system_name;


    }; // Lldp::TlvSelect


        std::unique_ptr<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp::TlvSelect> tlv_select; // presence node


}; // Lldp



}
}

#endif /* _CISCO_IOS_XR_ETHERNET_LLDP_CFG_ */

