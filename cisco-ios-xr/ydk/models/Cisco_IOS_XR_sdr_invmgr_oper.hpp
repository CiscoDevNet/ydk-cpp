#ifndef _CISCO_IOS_XR_SDR_INVMGR_OPER_
#define _CISCO_IOS_XR_SDR_INVMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_sdr_invmgr_oper {

class SdrInventory : public Entity
{
    public:
        SdrInventory();
        ~SdrInventory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Racks : public Entity
    {
        public:
            Racks();
            ~Racks();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Rack : public Entity
        {
            public:
                Rack();
                ~Rack();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf name; //type: string

            class Slot : public Entity
            {
                public:
                    Slot();
                    ~Slot();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf name; //type: string

                class Card : public Entity
                {
                    public:
                        Card();
                        ~Card();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf name; //type: string

                    class Attributes : public Entity
                    {
                        public:
                            Attributes();
                            ~Attributes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf power; //type: int32
                            YLeaf config_state; //type: int32
                            YLeaf card_state; //type: int32
                            YLeaf vm_state; //type: int32
                            YLeaf card_admin_state; //type: int32
                            YLeaf card_type; //type: int32
                            YLeaf pi_slot_number; //type: int32
                            YLeaf shutdown; //type: int32
                            YLeaf ctype; //type: int32
                            YLeaf monitor; //type: int32



                    }; // SdrInventory::Racks::Rack::Slot::Card::Attributes


                        std::unique_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack::Slot::Card::Attributes> attributes;


                }; // SdrInventory::Racks::Rack::Slot::Card


                    std::vector<std::unique_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack::Slot::Card> > card;


            }; // SdrInventory::Racks::Rack::Slot


                std::vector<std::unique_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack::Slot> > slot;


        }; // SdrInventory::Racks::Rack


            std::vector<std::unique_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack> > rack;


    }; // SdrInventory::Racks


        std::unique_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks> racks;


}; // SdrInventory



}
}

#endif /* _CISCO_IOS_XR_SDR_INVMGR_OPER_ */

