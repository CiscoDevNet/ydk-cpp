#ifndef _IETF_INTERFACES_
#define _IETF_INTERFACES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace ietf_interfaces {

class InterfaceTypeIdentity : public virtual Identity
{
    public:
        InterfaceTypeIdentity();
        ~InterfaceTypeIdentity();





}; // InterfaceTypeIdentity

class Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Interface : public Entity
    {
        public:
            Interface();
            ~Interface();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value name; //type: string
            Value description; //type: string
            Value type; //type: InterfaceTypeIdentity
            Value enabled; //type: boolean
            Value link_up_down_trap_enable; //type: LinkUpDownTrapEnableEnum


            class LinkUpDownTrapEnableEnum;


    }; // Interfaces::Interface


        std::vector<std::unique_ptr<ietf_interfaces::Interfaces::Interface> > interface;


}; // Interfaces

class InterfacesState : public Entity
{
    public:
        InterfacesState();
        ~InterfacesState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Interface : public Entity
    {
        public:
            Interface();
            ~Interface();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value name; //type: string
            Value type; //type: InterfaceTypeIdentity
            Value admin_status; //type: AdminStatusEnum
            Value oper_status; //type: OperStatusEnum
            Value last_change; //type: string
            Value if_index; //type: int32
            Value phys_address; //type: string
            Value speed; //type: uint64
            //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
            ValueList higher_layer_if;
            //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
            ValueList lower_layer_if;


        class Statistics : public Entity
        {
            public:
                Statistics();
                ~Statistics();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value discontinuity_time; //type: string
                Value in_octets; //type: uint64
                Value in_unicast_pkts; //type: uint64
                Value in_broadcast_pkts; //type: uint64
                Value in_multicast_pkts; //type: uint64
                Value in_discards; //type: uint32
                Value in_errors; //type: uint32
                Value in_unknown_protos; //type: uint32
                Value out_octets; //type: uint64
                Value out_unicast_pkts; //type: uint64
                Value out_broadcast_pkts; //type: uint64
                Value out_multicast_pkts; //type: uint64
                Value out_discards; //type: uint32
                Value out_errors; //type: uint32
                Value in_pkts; //type: uint64
                Value out_pkts; //type: uint64




        }; // InterfacesState::Interface::Statistics


        class Bandwidth : public Entity
        {
            public:
                Bandwidth();
                ~Bandwidth();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value value_; //type: uint64
                Value units; //type: string




        }; // InterfacesState::Interface::Bandwidth


            std::unique_ptr<ietf_interfaces::InterfacesState::Interface::Bandwidth> bandwidth;
            std::unique_ptr<ietf_interfaces::InterfacesState::Interface::Statistics> statistics;
            class AdminStatusEnum;
            class OperStatusEnum;


    }; // InterfacesState::Interface


        std::vector<std::unique_ptr<ietf_interfaces::InterfacesState::Interface> > interface;


}; // InterfacesState


class Interfaces::Interface::LinkUpDownTrapEnableEnum : public Enum
{
    public:
        static const Enum::Value enabled;
        static const Enum::Value disabled;

};

class InterfacesState::Interface::AdminStatusEnum : public Enum
{
    public:
        static const Enum::Value up;
        static const Enum::Value down;
        static const Enum::Value testing;

};

class InterfacesState::Interface::OperStatusEnum : public Enum
{
    public:
        static const Enum::Value up;
        static const Enum::Value down;
        static const Enum::Value testing;
        static const Enum::Value unknown;
        static const Enum::Value dormant;
        static const Enum::Value not_present;
        static const Enum::Value lower_layer_down;

};


}
}

#endif /* _IETF_INTERFACES_ */

