#ifndef _CISCO_IOS_XR_MPLS_LSD_CFG_
#define _CISCO_IOS_XR_MPLS_LSD_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_lsd_cfg {

class MplsLsd : public Entity
{
    public:
        MplsLsd();
        ~MplsLsd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value app_reg_delay_disable; //type: empty
        Value mpls_entropy_label; //type: empty
        Value mpls_ip_ttl_propagate_disable; //type: MplsIpTtlPropagateDisableEnum


    class Ipv6 : public Entity
    {
        public:
            Ipv6();
            ~Ipv6();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value ttl_expiration_pop; //type: uint32




    }; // MplsLsd::Ipv6


    class Ipv4 : public Entity
    {
        public:
            Ipv4();
            ~Ipv4();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value ttl_expiration_pop; //type: uint32




    }; // MplsLsd::Ipv4


    class LabelDatabases : public Entity
    {
        public:
            LabelDatabases();
            ~LabelDatabases();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class LabelDatabase : public Entity
        {
            public:
                LabelDatabase();
                ~LabelDatabase();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value label_database_id; //type: uint32


            class LabelRange : public Entity
            {
                public:
                    LabelRange();
                    ~LabelRange();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value minvalue; //type: uint32
                    Value max_value; //type: uint32
                    Value min_static_value; //type: uint32
                    Value max_static_value; //type: uint32




            }; // MplsLsd::LabelDatabases::LabelDatabase::LabelRange


                std::unique_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::LabelDatabases::LabelDatabase::LabelRange> label_range;


        }; // MplsLsd::LabelDatabases::LabelDatabase


            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::LabelDatabases::LabelDatabase> > label_database;


    }; // MplsLsd::LabelDatabases


        std::unique_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::Ipv4> ipv4;
        std::unique_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::Ipv6> ipv6;
        std::unique_ptr<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd::LabelDatabases> label_databases;
        class MplsIpTtlPropagateDisableEnum;


}; // MplsLsd


class MplsIpTtlPropagateDisableEnum : public Enum
{
    public:
        static const Enum::Value all;
        static const Enum::Value forward;
        static const Enum::Value local;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_CFG_ */

