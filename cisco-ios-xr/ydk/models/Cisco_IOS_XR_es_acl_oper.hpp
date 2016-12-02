#ifndef _CISCO_IOS_XR_ES_ACL_OPER_
#define _CISCO_IOS_XR_ES_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_common_acl_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_es_acl_oper {

class EsAcl : public Entity
{
    public:
        EsAcl();
        ~EsAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Active : public Entity
    {
        public:
            Active();
            ~Active();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Oor : public Entity
        {
            public:
                Oor();
                ~Oor();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class AclSummary : public Entity
            {
                public:
                    AclSummary();
                    ~AclSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Details : public Entity
                {
                    public:
                        Details();
                        ~Details();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value current_configured_ac_ls; //type: uint32
                        Value current_configured_ac_es; //type: uint32
                        Value maximum_configurable_ac_ls; //type: uint32
                        Value maximum_configurable_ac_es; //type: uint32




                }; // EsAcl::Active::Oor::AclSummary::Details


                    std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Oor::AclSummary::Details> details;


            }; // EsAcl::Active::Oor::AclSummary


                std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Oor::AclSummary> acl_summary;


        }; // EsAcl::Active::Oor


        class List : public Entity
        {
            public:
                List();
                ~List();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Acls : public Entity
            {
                public:
                    Acls();
                    ~Acls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Acl : public Entity
                {
                    public:
                        Acl();
                        ~Acl();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string


                    class AclSequenceNumbers : public Entity
                    {
                        public:
                            AclSequenceNumbers();
                            ~AclSequenceNumbers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class AclSequenceNumber : public Entity
                        {
                            public:
                                AclSequenceNumber();
                                ~AclSequenceNumber();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sequence_number; //type: uint32
                                Value ace_type; //type: AclAce1Enum
                                Value ace_sequence_number; //type: uint32
                                Value hits; //type: uint64
                                Value grant; //type: AclActionEnum
                                Value source_address; //type: string
                                Value source_wild_card_bits; //type: string
                                Value destination_address; //type: string
                                Value destination_wild_card_bits; //type: string
                                Value ether_type_number; //type: uint16
                                Value vlan1; //type: uint16
                                Value vlan2; //type: uint16
                                Value cos; //type: uint8
                                Value dei; //type: uint8
                                Value inner_header_vlan1; //type: uint16
                                Value inner_header_vlan2; //type: uint16
                                Value inner_header_cos; //type: uint8
                                Value inner_header_dei; //type: uint8
                                Value capture; //type: boolean
                                Value log_option; //type: uint8
                                Value remark; //type: string
                                Value acl_name; //type: string
                                Value sequence_string; //type: string


                                class AclAce1Enum;
                                class AclActionEnum;


                        }; // EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber


                            std::vector<std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber> > acl_sequence_number;


                    }; // EsAcl::Active::List::Acls::Acl::AclSequenceNumbers


                        std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls::Acl::AclSequenceNumbers> acl_sequence_numbers;


                }; // EsAcl::Active::List::Acls::Acl


                    std::vector<std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls::Acl> > acl;


            }; // EsAcl::Active::List::Acls


                std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls> acls;


        }; // EsAcl::Active::List


        class OorAcls : public Entity
        {
            public:
                OorAcls();
                ~OorAcls();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class OorAcl : public Entity
            {
                public:
                    OorAcl();
                    ~OorAcl();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string
                    Value current_configured_ac_ls; //type: uint32
                    Value current_configured_ac_es; //type: uint32
                    Value maximum_configurable_ac_ls; //type: uint32
                    Value maximum_configurable_ac_es; //type: uint32




            }; // EsAcl::Active::OorAcls::OorAcl


                std::vector<std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::OorAcls::OorAcl> > oor_acl;


        }; // EsAcl::Active::OorAcls


        class Usages : public Entity
        {
            public:
                Usages();
                ~Usages();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Usage : public Entity
            {
                public:
                    Usage();
                    ~Usage();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value location; //type: string
                    Value application_id; //type: AclUsageAppIdEnumEnum
                    Value name; //type: string
                    Value usage_details; //type: string


                    class AclUsageAppIdEnumEnum;


            }; // EsAcl::Active::Usages::Usage


                std::vector<std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Usages::Usage> > usage;


        }; // EsAcl::Active::Usages


            std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List> list;
            std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Oor> oor;
            std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::OorAcls> oor_acls;
            std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Usages> usages;


    }; // EsAcl::Active


        std::unique_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active> active;


}; // EsAcl


class AclActionEnum : public Enum
{
    public:
        static const Enum::Value deny;
        static const Enum::Value permit;
        static const Enum::Value encrypt;
        static const Enum::Value bypass;
        static const Enum::Value fallthrough;
        static const Enum::Value invalid;

};

class AclAce1Enum : public Enum
{
    public:
        static const Enum::Value normal;
        static const Enum::Value remark;
        static const Enum::Value abf;

};


}
}

#endif /* _CISCO_IOS_XR_ES_ACL_OPER_ */

