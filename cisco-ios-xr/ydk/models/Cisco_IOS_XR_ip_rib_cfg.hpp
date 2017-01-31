#ifndef _CISCO_IOS_XR_IP_RIB_CFG_
#define _CISCO_IOS_XR_IP_RIB_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rib_cfg {

class Rib : public Entity
{
    public:
        Rib();
        ~Rib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf max_recursion_depth; //type: uint32

    class Af : public Entity
    {
        public:
            Af();
            ~Af();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



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


                YLeaf next_hop_dampening_disable; //type: empty

            class RedistributionHistory : public Entity
            {
                public:
                    RedistributionHistory();
                    ~RedistributionHistory();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf bcdl_client; //type: uint32
                    YLeaf protocol_client; //type: uint32

                class Keep : public Entity
                {
                    public:
                        Keep();
                        ~Keep();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf bcdl; //type: empty



                }; // Rib::Af::Ipv4::RedistributionHistory::Keep


                    std::unique_ptr<Cisco_IOS_XR_ip_rib_cfg::Rib::Af::Ipv4::RedistributionHistory::Keep> keep;


            }; // Rib::Af::Ipv4::RedistributionHistory


                std::unique_ptr<Cisco_IOS_XR_ip_rib_cfg::Rib::Af::Ipv4::RedistributionHistory> redistribution_history;


        }; // Rib::Af::Ipv4


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


                YLeaf next_hop_dampening_disable; //type: empty

            class RedistributionHistory : public Entity
            {
                public:
                    RedistributionHistory();
                    ~RedistributionHistory();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf bcdl_client; //type: uint32
                    YLeaf protocol_client; //type: uint32

                class Keep : public Entity
                {
                    public:
                        Keep();
                        ~Keep();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf bcdl; //type: empty



                }; // Rib::Af::Ipv6::RedistributionHistory::Keep


                    std::unique_ptr<Cisco_IOS_XR_ip_rib_cfg::Rib::Af::Ipv6::RedistributionHistory::Keep> keep;


            }; // Rib::Af::Ipv6::RedistributionHistory


                std::unique_ptr<Cisco_IOS_XR_ip_rib_cfg::Rib::Af::Ipv6::RedistributionHistory> redistribution_history;


        }; // Rib::Af::Ipv6


            std::unique_ptr<Cisco_IOS_XR_ip_rib_cfg::Rib::Af::Ipv4> ipv4;
            std::unique_ptr<Cisco_IOS_XR_ip_rib_cfg::Rib::Af::Ipv6> ipv6;


    }; // Rib::Af


        std::unique_ptr<Cisco_IOS_XR_ip_rib_cfg::Rib::Af> af;


}; // Rib



}
}

#endif /* _CISCO_IOS_XR_IP_RIB_CFG_ */

