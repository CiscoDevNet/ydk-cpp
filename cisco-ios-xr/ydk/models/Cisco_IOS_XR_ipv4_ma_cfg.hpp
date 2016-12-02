#ifndef _CISCO_IOS_XR_IPV4_MA_CFG_
#define _CISCO_IOS_XR_IPV4_MA_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ma_cfg {

class Ipv4NetworkGlobal : public Entity
{
    public:
        Ipv4NetworkGlobal();
        ~Ipv4NetworkGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value source_route; //type: boolean
        Value reassemble_max_packets; //type: uint32
        Value reassemble_time_out; //type: uint32


    class Unnumbered : public Entity
    {
        public:
            Unnumbered();
            ~Unnumbered();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Mpls : public Entity
        {
            public:
                Mpls();
                ~Mpls();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Te : public Entity
            {
                public:
                    Te();
                    ~Te();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface; //type: string




            }; // Ipv4NetworkGlobal::Unnumbered::Mpls::Te


                std::unique_ptr<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Unnumbered::Mpls::Te> te;


        }; // Ipv4NetworkGlobal::Unnumbered::Mpls


            std::unique_ptr<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Unnumbered::Mpls> mpls;


    }; // Ipv4NetworkGlobal::Unnumbered


    class Qppb : public Entity
    {
        public:
            Qppb();
            ~Qppb();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value source; //type: Ipv4QppbEnum
            Value destination; //type: Ipv4QppbEnum


            class Ipv4QppbEnum;
            class Ipv4QppbEnum;


    }; // Ipv4NetworkGlobal::Qppb


        std::unique_ptr<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Qppb> qppb;
        std::unique_ptr<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Unnumbered> unnumbered;


}; // Ipv4NetworkGlobal

class SubscriberPta : public Entity
{
    public:
        SubscriberPta();
        ~SubscriberPta();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value tcp_mss_adjust; //type: uint32




}; // SubscriberPta


class Ipv4QppbEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value ip_prec;
        static const Enum::Value qos_grp;
        static const Enum::Value both;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MA_CFG_ */

