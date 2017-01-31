#ifndef _CISCO_IOS_XR_INFRA_SLA_CFG_
#define _CISCO_IOS_XR_INFRA_SLA_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace Cisco_IOS_XR_infra_sla_cfg {

class Sla : public Entity
{
    public:
        Sla();
        ~Sla();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Protocols : public Entity
    {
        public:
            Protocols();
            ~Protocols();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Ethernet : public Entity
        {
            public:
                Ethernet();
                ~Ethernet();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Profiles : public Entity
            {
                public:
                    Profiles();
                    ~Profiles();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



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


                        YLeaf profile_name; //type: string
                        YLeaf packet_type; //type: string

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



                        class Statistic : public Entity
                        {
                            public:
                                Statistic();
                                ~Statistic();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf statistic_name; //type: SlaStatisticTypeEnumEnum
                                YLeaf enable; //type: empty
                                YLeaf buckets_archive; //type: uint32

                            class BucketsSize : public Entity
                            {
                                public:
                                    BucketsSize();
                                    ~BucketsSize();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf buckets_size; //type: uint32
                                    YLeaf buckets_size_unit; //type: SlaBucketsSizeUnitsEnumEnum



                            }; // Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize


                            class Aggregation : public Entity
                            {
                                public:
                                    Aggregation();
                                    ~Aggregation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf bins_count; //type: uint32
                                    YLeaf bins_width; //type: uint32
                                    YLeaf bins_width_tenths; //type: uint32



                            }; // Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation


                                std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::Aggregation> aggregation; // presence node
                                std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic::BucketsSize> buckets_size; // presence node


                        }; // Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Statistics::Statistic> > statistic;


                    }; // Sla::Protocols::Ethernet::Profiles::Profile::Statistics


                    class Schedule : public Entity
                    {
                        public:
                            Schedule();
                            ~Schedule();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf probe_interval; //type: uint32
                            YLeaf probe_interval_day; //type: SlaProbeIntervalDayEnumEnum
                            YLeaf probe_interval_unit; //type: SlaProbeIntervalUnitsEnumEnum
                            YLeaf start_time_hour; //type: uint32
                            YLeaf start_time_minute; //type: uint32
                            YLeaf start_time_second; //type: uint32
                            YLeaf probe_duration; //type: uint32
                            YLeaf probe_duration_unit; //type: SlaProbeDurationUnitsEnumEnum



                    }; // Sla::Protocols::Ethernet::Profiles::Profile::Schedule


                    class Probe : public Entity
                    {
                        public:
                            Probe();
                            ~Probe();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf priority; //type: uint32
                            YLeaf synthetic_loss_calculation_packets; //type: uint32

                        class Send : public Entity
                        {
                            public:
                                Send();
                                ~Send();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf burst_interval; //type: uint32
                                YLeaf burst_interval_unit; //type: SlaBurstIntervalUnitsEnumEnum
                                YLeaf packet_interval; //type: uint32
                                YLeaf packet_interval_unit; //type: SlaPacketIntervalUnitsEnumEnum
                                YLeaf packet_count; //type: uint32
                                YLeaf send_type; //type: SlaSendEnum



                        }; // Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send


                        class PacketSizeAndPadding : public Entity
                        {
                            public:
                                PacketSizeAndPadding();
                                ~PacketSizeAndPadding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf size; //type: uint32
                                YLeaf padding_type; //type: SlaPaddingPatternEnum
                                YLeaf padding_value; //type: string



                        }; // Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding


                            std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Probe::PacketSizeAndPadding> packet_size_and_padding; // presence node
                            std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Probe::Send> send; // presence node


                    }; // Sla::Protocols::Ethernet::Profiles::Profile::Probe


                        std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Probe> probe;
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Schedule> schedule; // presence node
                        std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile::Statistics> statistics;


                }; // Sla::Protocols::Ethernet::Profiles::Profile


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles::Profile> > profile;


            }; // Sla::Protocols::Ethernet::Profiles


                std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet::Profiles> profiles;


        }; // Sla::Protocols::Ethernet


            std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols::Ethernet> ethernet;


    }; // Sla::Protocols


        std::unique_ptr<Cisco_IOS_XR_infra_sla_cfg::Sla::Protocols> protocols;


}; // Sla



}
}

#endif /* _CISCO_IOS_XR_INFRA_SLA_CFG_ */

