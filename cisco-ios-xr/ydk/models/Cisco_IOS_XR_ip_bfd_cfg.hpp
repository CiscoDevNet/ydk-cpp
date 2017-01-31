#ifndef _CISCO_IOS_XR_IP_BFD_CFG_
#define _CISCO_IOS_XR_IP_BFD_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_bfd_cfg {

class Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf global_echo_usage; //type: empty
        YLeaf ipv6_checksum_disable; //type: empty
        YLeaf global_echo_min_interval; //type: uint32
        YLeaf ttl_drop_threshold; //type: uint32
        YLeaf single_hop_trap; //type: empty
        YLeaf global_ipv4_echo_source; //type: string

    class FlapDamp : public Entity
    {
        public:
            FlapDamp();
            ~FlapDamp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf threshold; //type: uint32
            YLeaf initial_delay; //type: uint32
            YLeaf maximum_delay; //type: uint32
            YLeaf dampen_disable; //type: empty
            YLeaf secondary_delay; //type: uint32

        class BundleMember : public Entity
        {
            public:
                BundleMember();
                ~BundleMember();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf initial_delay; //type: uint32
                YLeaf maximum_delay; //type: uint32
                YLeaf secondary_delay; //type: uint32
                YLeaf l3_only_mode; //type: empty



        }; // Bfd::FlapDamp::BundleMember


        class Extensions : public Entity
        {
            public:
                Extensions();
                ~Extensions();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf down_monitor; //type: empty



        }; // Bfd::FlapDamp::Extensions


            std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::FlapDamp::BundleMember> bundle_member;
            std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::FlapDamp::Extensions> extensions;


    }; // Bfd::FlapDamp


    class EchoLatency : public Entity
    {
        public:
            EchoLatency();
            ~EchoLatency();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Detect : public Entity
        {
            public:
                Detect();
                ~Detect();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf latency_detect_enabled; //type: boolean
                YLeaf latency_detect_percentage; //type: uint32
                YLeaf latency_detect_count; //type: uint32



        }; // Bfd::EchoLatency::Detect


            std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::EchoLatency::Detect> detect;


    }; // Bfd::EchoLatency


    class EchoStartup : public Entity
    {
        public:
            EchoStartup();
            ~EchoStartup();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf validate; //type: BfdEchoStartupValidateEnum



    }; // Bfd::EchoStartup


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


                YLeaf interface_name; //type: string
                YLeaf interface_echo_usage; //type: BfdIfEchoUsageEnum
                YLeaf ipv6_checksum; //type: BfdIfIpv6ChecksumUsageEnum
                YLeaf interface_ipv4_echo_source; //type: string



        }; // Bfd::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::Interfaces::Interface> > interface;


    }; // Bfd::Interfaces


    class MultiPathIncludes : public Entity
    {
        public:
            MultiPathIncludes();
            ~MultiPathIncludes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class MultiPathInclude : public Entity
        {
            public:
                MultiPathInclude();
                ~MultiPathInclude();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf location; //type: string



        }; // Bfd::MultiPathIncludes::MultiPathInclude


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::MultiPathIncludes::MultiPathInclude> > multi_path_include;


    }; // Bfd::MultiPathIncludes


    class Bundle : public Entity
    {
        public:
            Bundle();
            ~Bundle();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Coexistence : public Entity
        {
            public:
                Coexistence();
                ~Coexistence();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf bob_blb; //type: BfdBundleCoexistenceBobBlbEnum



        }; // Bfd::Bundle::Coexistence


            std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::Bundle::Coexistence> coexistence;


    }; // Bfd::Bundle


        std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::Bundle> bundle;
        std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::EchoLatency> echo_latency;
        std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::EchoStartup> echo_startup;
        std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::FlapDamp> flap_damp;
        std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_ip_bfd_cfg::Bfd::MultiPathIncludes> multi_path_includes;


}; // Bfd


class BfdEchoStartupValidateEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;
        static const Enum::YLeaf force;

};

class BfdIfIpv6ChecksumUsageEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class BfdIfEchoUsageEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class BfdBundleCoexistenceBobBlbEnum : public Enum
{
    public:
        static const Enum::YLeaf inherited;
        static const Enum::YLeaf logical;

};


}
}

#endif /* _CISCO_IOS_XR_IP_BFD_CFG_ */

