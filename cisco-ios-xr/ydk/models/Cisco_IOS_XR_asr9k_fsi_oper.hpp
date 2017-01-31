#ifndef _CISCO_IOS_XR_ASR9K_FSI_OPER_
#define _CISCO_IOS_XR_ASR9K_FSI_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_fsi_oper {

class FabricStats : public Entity
{
    public:
        FabricStats();
        ~FabricStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf node_name; //type: string

            class Statses : public Entity
            {
                public:
                    Statses();
                    ~Statses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Stats : public Entity
                {
                    public:
                        Stats();
                        ~Stats();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf type; //type: string
                        YLeaf stat_table_name; //type: string

                    class StatsTable : public Entity
                    {
                        public:
                            StatsTable();
                            ~StatsTable();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class FsiStat : public Entity
                        {
                            public:
                                FsiStat();
                                ~FsiStat();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf count; //type: uint64
                                YLeaf counter_name; //type: string



                        }; // FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat


                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses::Stats::StatsTable::FsiStat> > fsi_stat;


                    }; // FabricStats::Nodes::Node::Statses::Stats::StatsTable


                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses::Stats::StatsTable> > stats_table;


                }; // FabricStats::Nodes::Node::Statses::Stats


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses::Stats> > stats;


            }; // FabricStats::Nodes::Node::Statses


                std::unique_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node::Statses> statses;


        }; // FabricStats::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes::Node> > node;


    }; // FabricStats::Nodes


        std::unique_ptr<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats::Nodes> nodes;


}; // FabricStats



}
}

#endif /* _CISCO_IOS_XR_ASR9K_FSI_OPER_ */

