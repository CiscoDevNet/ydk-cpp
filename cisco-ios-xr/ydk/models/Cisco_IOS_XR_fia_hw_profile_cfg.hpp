#ifndef _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_
#define _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fia_hw_profile_cfg {

class HwModuleProfileConfig : public Entity
{
    public:
        HwModuleProfileConfig();
        ~HwModuleProfileConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Profile : public Entity
    {
        public:
            Profile();
            ~Profile();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class TcamTable : public Entity
        {
            public:
                TcamTable();
                ~TcamTable();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class FibTable : public Entity
            {
                public:
                    FibTable();
                    ~FibTable();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ipv4Address : public Entity
                {
                    public:
                        Ipv4Address();
                        ~Ipv4Address();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Ipv4Unicast : public Entity
                    {
                        public:
                            Ipv4Unicast();
                            ~Ipv4Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv4_unicast_percent; //type: uint32


                        class Ipv4UnicastPrefixLengths : public Entity
                        {
                            public:
                                Ipv4UnicastPrefixLengths();
                                ~Ipv4UnicastPrefixLengths();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Ipv4UnicastPrefixLength : public Entity
                            {
                                public:
                                    Ipv4UnicastPrefixLength();
                                    ~Ipv4UnicastPrefixLength();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value prefix_length; //type: uint32
                                    Value ipv4_unicast_prefix_percent; //type: string




                            }; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength> > ipv4_unicast_prefix_length;


                        }; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths


                            std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths> ipv4_unicast_prefix_lengths;


                    }; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast


                        std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast> ipv4_unicast;


                }; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address


                class Ipv6Address : public Entity
                {
                    public:
                        Ipv6Address();
                        ~Ipv6Address();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Ipv6Unicast : public Entity
                    {
                        public:
                            Ipv6Unicast();
                            ~Ipv6Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv6_unicast_percent; //type: uint32


                        class Ipv6UnicastPrefixLengths : public Entity
                        {
                            public:
                                Ipv6UnicastPrefixLengths();
                                ~Ipv6UnicastPrefixLengths();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Ipv6UnicastPrefixLength : public Entity
                            {
                                public:
                                    Ipv6UnicastPrefixLength();
                                    ~Ipv6UnicastPrefixLength();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value prefix_length; //type: uint32
                                    Value ipv6_unicast_prefix_percent; //type: string




                            }; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength> > ipv6_unicast_prefix_length;


                        }; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths


                            std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths> ipv6_unicast_prefix_lengths;


                    }; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast


                        std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast> ipv6_unicast;


                }; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address


                    std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address> ipv4_address;
                    std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address> ipv6_address;


            }; // HwModuleProfileConfig::Profile::TcamTable::FibTable


                std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable> fib_table;


        }; // HwModuleProfileConfig::Profile::TcamTable


            std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable> tcam_table;


    }; // HwModuleProfileConfig::Profile


        std::unique_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile> profile;


}; // HwModuleProfileConfig



}
}

#endif /* _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_ */

