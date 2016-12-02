#ifndef _CISCO_IOS_XR_IP_IEP_OPER_
#define _CISCO_IOS_XR_IP_IEP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_iep_oper {

class ExplicitPaths : public Entity
{
    public:
        ExplicitPaths();
        ~ExplicitPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Identifiers : public Entity
    {
        public:
            Identifiers();
            ~Identifiers();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Identifier : public Entity
        {
            public:
                Identifier();
                ~Identifier();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value identifier_id; //type: int32
                Value status; //type: IepStatusEnum


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
                    Value index_; //type: uint32
                    Value if_index; //type: uint32
                    Value address_type; //type: IepAddressEnum
                    Value hop_type; //type: IepHopEnum
                    Value address; //type: string
                    Value mpls_label; //type: uint32


                    class IepAddressEnum;
                    class IepHopEnum;


            }; // ExplicitPaths::Identifiers::Identifier::Address


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Identifiers::Identifier::Address> > address;
                class IepStatusEnum;


        }; // ExplicitPaths::Identifiers::Identifier


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Identifiers::Identifier> > identifier;


    }; // ExplicitPaths::Identifiers


    class Names : public Entity
    {
        public:
            Names();
            ~Names();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Name : public Entity
        {
            public:
                Name();
                ~Name();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value path_name; //type: string
                Value status; //type: IepStatusEnum


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
                    Value index_; //type: uint32
                    Value if_index; //type: uint32
                    Value address_type; //type: IepAddressEnum
                    Value hop_type; //type: IepHopEnum
                    Value address; //type: string
                    Value mpls_label; //type: uint32


                    class IepAddressEnum;
                    class IepHopEnum;


            }; // ExplicitPaths::Names::Name::Address


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Names::Name::Address> > address;
                class IepStatusEnum;


        }; // ExplicitPaths::Names::Name


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Names::Name> > name;


    }; // ExplicitPaths::Names


        std::unique_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Identifiers> identifiers;
        std::unique_ptr<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths::Names> names;


}; // ExplicitPaths


class IepStatusEnum : public Enum
{
    public:
        static const Enum::Value enabled;
        static const Enum::Value disabled;

};

class IepAddressEnum : public Enum
{
    public:
        static const Enum::Value next;
        static const Enum::Value exclude;
        static const Enum::Value exclude_srlg;

};

class IepHopEnum : public Enum
{
    public:
        static const Enum::Value strict;
        static const Enum::Value loose;

};


}
}

#endif /* _CISCO_IOS_XR_IP_IEP_OPER_ */

