#ifndef _CISCO_IOS_XR_ASR9K_ASIC_ERRORS_OPER_
#define _CISCO_IOS_XR_ASR9K_ASIC_ERRORS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_asic_errors_oper {

class AsicErrorStats : public Entity
{
    public:
        AsicErrorStats();
        ~AsicErrorStats();

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
                Value node_name; //type: string


            class Counts : public Entity
            {
                public:
                    Counts();
                    ~Counts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Count : public Entity
                {
                    public:
                        Count();
                        ~Count();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value type; //type: string


                    class SumData : public Entity
                    {
                        public:
                            SumData();
                            ~SumData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value instance; //type: uint32
                            Value num_nodes; //type: uint32
                            Value crc_err_count; //type: uint32
                            Value sbe_err_count; //type: uint32
                            Value mbe_err_count; //type: uint32
                            Value par_err_count; //type: uint32
                            Value gen_err_count; //type: uint32
                            Value reset_err_count; //type: uint32
                            ValueList node_key; //type: list of  uint32




                    }; // AsicErrorStats::Nodes::Node::Counts::Count::SumData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes::Node::Counts::Count::SumData> > sum_data;


                }; // AsicErrorStats::Nodes::Node::Counts::Count


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes::Node::Counts::Count> > count;


            }; // AsicErrorStats::Nodes::Node::Counts


                std::unique_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes::Node::Counts> counts;


        }; // AsicErrorStats::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes::Node> > node;


    }; // AsicErrorStats::Nodes


        std::unique_ptr<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats::Nodes> nodes;


}; // AsicErrorStats



}
}

#endif /* _CISCO_IOS_XR_ASR9K_ASIC_ERRORS_OPER_ */

