#ifndef _CISCO_IOS_XR_NCS1K_MXP_CFG_
#define _CISCO_IOS_XR_NCS1K_MXP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_cfg {

class HardwareModule : public Entity
{
    public:
        HardwareModule();
        ~HardwareModule();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
            Value location; //type: string


        class Slice : public Entity
        {
            public:
                Slice();
                ~Slice();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value slice_id; //type: string
                Value lldp; //type: boolean


            class Values : public Entity
            {
                public:
                    Values();
                    ~Values();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value client_rate; //type: ClientDataRateEnum
                    Value trunk_rate; //type: TrunkDataRateEnum
                    Value fec; //type: FecEnum
                    Value encrypted; //type: boolean


                    class ClientDataRateEnum;
                    class FecEnum;
                    class TrunkDataRateEnum;


            }; // HardwareModule::Node::Slice::Values


                std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule::Node::Slice::Values> values;


        }; // HardwareModule::Node::Slice


            std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule::Node::Slice> > slice;


    }; // HardwareModule::Node


        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule::Node> > node;


}; // HardwareModule


class ClientDataRateEnum : public Enum
{
    public:
        static const Enum::Value ten_gig;
        static const Enum::Value forty_gig;
        static const Enum::Value hundred_gig;

};

class TrunkDataRateEnum : public Enum
{
    public:
        static const Enum::Value hundred_gig;
        static const Enum::Value two_hundred_gig;
        static const Enum::Value two_hundred_fifty_gig;

};

class FecEnum : public Enum
{
    public:
        static const Enum::Value sd7;
        static const Enum::Value sd20;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1K_MXP_CFG_ */

