#ifndef _CISCO_IOS_XR_ES_ACL_CFG_
#define _CISCO_IOS_XR_ES_ACL_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_es_acl_cfg {

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


    class Accesses : public Entity
    {
        public:
            Accesses();
            ~Accesses();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Access : public Entity
        {
            public:
                Access();
                ~Access();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string


            class AccessListEntries : public Entity
            {
                public:
                    AccessListEntries();
                    ~AccessListEntries();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class AccessListEntry : public Entity
                {
                    public:
                        AccessListEntry();
                        ~AccessListEntry();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value sequence_number; //type: uint32
                        Value grant; //type: EsAclGrantEnumEnum
                        Value vlan1; //type: uint16
                        Value vlan2; //type: uint16
                        Value cos; //type: uint8
                        Value dei; //type: uint8
                        Value inner_vlan1; //type: uint16
                        Value inner_vlan2; //type: uint16
                        Value inner_cos; //type: uint8
                        Value inner_dei; //type: uint8
                        Value remark; //type: string
                        Value ether_type_number; //type: uint16
                        Value capture; //type: boolean
                        Value log_option; //type: uint8
                        Value sequence_str; //type: string


                    class SourceNetwork : public Entity
                    {
                        public:
                            SourceNetwork();
                            ~SourceNetwork();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_wild_card_bits; //type: string




                    }; // EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork


                    class DestinationNetwork : public Entity
                    {
                        public:
                            DestinationNetwork();
                            ~DestinationNetwork();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value destination_wild_card_bits; //type: string




                    }; // EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork


                        std::unique_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork> destination_network;
                        std::unique_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork> source_network;
                        class EsAclGrantEnumEnum;


                }; // EsAcl::Accesses::Access::AccessListEntries::AccessListEntry


                    std::vector<std::unique_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries::AccessListEntry> > access_list_entry;


            }; // EsAcl::Accesses::Access::AccessListEntries


                std::unique_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access::AccessListEntries> access_list_entries;


        }; // EsAcl::Accesses::Access


            std::vector<std::unique_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses::Access> > access;


    }; // EsAcl::Accesses


        std::unique_ptr<Cisco_IOS_XR_es_acl_cfg::EsAcl::Accesses> accesses;


}; // EsAcl


class EsAclGrantEnumEnum : public Enum
{
    public:
        static const Enum::Value deny;
        static const Enum::Value permit;

};


}
}

#endif /* _CISCO_IOS_XR_ES_ACL_CFG_ */

