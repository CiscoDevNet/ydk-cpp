#ifndef _OPENCONFIG_VLAN_
#define _OPENCONFIG_VLAN_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace openconfig_vlan {

class Vlans : public Entity
{
    public:
        Vlans();
        ~Vlans();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Vlan : public Entity
    {
        public:
            Vlan();
            ~Vlan();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            //type: uint16 (refers to openconfig_vlan::Vlans::Vlan::Config::vlan_id)
            YLeaf vlan_id;

        class Config : public Entity
        {
            public:
                Config();
                ~Config();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vlan_id; //type: uint16
                YLeaf name; //type: string
                YLeaf status; //type: StatusEnum

                class StatusEnum;


        }; // Vlans::Vlan::Config


        class State : public Entity
        {
            public:
                State();
                ~State();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vlan_id; //type: uint16
                YLeaf name; //type: string
                YLeaf status; //type: StatusEnum
                //type: list of  leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                YLeafList member_ports;

                class StatusEnum;


        }; // Vlans::Vlan::State


            std::unique_ptr<openconfig_vlan::Vlans::Vlan::Config> config;
            std::unique_ptr<openconfig_vlan::Vlans::Vlan::State> state;


    }; // Vlans::Vlan


        std::vector<std::unique_ptr<openconfig_vlan::Vlans::Vlan> > vlan;


}; // Vlans


class VlanModeTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ACCESS;
        static const Enum::YLeaf TRUNK;

};

class Vlans::Vlan::Config::StatusEnum : public Enum
{
    public:
        static const Enum::YLeaf ACTIVE;
        static const Enum::YLeaf SUSPENDED;

};

class Vlans::Vlan::State::StatusEnum : public Enum
{
    public:
        static const Enum::YLeaf ACTIVE;
        static const Enum::YLeaf SUSPENDED;

};


}
}

#endif /* _OPENCONFIG_VLAN_ */

