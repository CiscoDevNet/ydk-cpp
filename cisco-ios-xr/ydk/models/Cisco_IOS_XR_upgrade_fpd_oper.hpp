#ifndef _CISCO_IOS_XR_UPGRADE_FPD_OPER_
#define _CISCO_IOS_XR_UPGRADE_FPD_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_upgrade_fpd_oper {

class Fpd : public Entity
{
    public:
        Fpd();
        ~Fpd();

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

            class Devices : public Entity
            {
                public:
                    Devices();
                    ~Devices();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Device : public Entity
                {
                    public:
                        Device();
                        ~Device();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf fpd_type; //type: FpdEnum
                        YLeaf instance; //type: int32
                        YLeaf sub_type; //type: FpdSubEnum
                        YLeaf card_type; //type: string
                        YLeaf hardware_version; //type: string
                        YLeaf software_version; //type: string
                        YLeaf is_upgrade_downgrade; //type: boolean



                }; // Fpd::Nodes::Node::Devices::Device


                    std::vector<std::unique_ptr<Cisco_IOS_XR_upgrade_fpd_oper::Fpd::Nodes::Node::Devices::Device> > device;


            }; // Fpd::Nodes::Node::Devices


                std::unique_ptr<Cisco_IOS_XR_upgrade_fpd_oper::Fpd::Nodes::Node::Devices> devices;


        }; // Fpd::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_upgrade_fpd_oper::Fpd::Nodes::Node> > node;


    }; // Fpd::Nodes


    class Packages : public Entity
    {
        public:
            Packages();
            ~Packages();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class AllPackage : public Entity
        {
            public:
                AllPackage();
                ~AllPackage();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf card_type; //type: string
                YLeaf card_description; //type: string
                YLeaf fpd_type; //type: Fpd1Enum
                YLeaf fpd_sub_type; //type: FpdSub1Enum
                YLeaf software_version; //type: string
                YLeaf minimum_required_software_version; //type: string
                YLeaf minimum_required_hardware_version; //type: string



        }; // Fpd::Packages::AllPackage


            std::vector<std::unique_ptr<Cisco_IOS_XR_upgrade_fpd_oper::Fpd::Packages::AllPackage> > all_package;


    }; // Fpd::Packages


        std::unique_ptr<Cisco_IOS_XR_upgrade_fpd_oper::Fpd::Nodes> nodes;
        std::unique_ptr<Cisco_IOS_XR_upgrade_fpd_oper::Fpd::Packages> packages;


}; // Fpd


class FpdSub1Enum : public Enum
{
    public:
        static const Enum::YLeaf fpga1;
        static const Enum::YLeaf rommon;
        static const Enum::YLeaf rommona;
        static const Enum::YLeaf fabric_loader;
        static const Enum::YLeaf fpga2;
        static const Enum::YLeaf fpga3;
        static const Enum::YLeaf fpga4;
        static const Enum::YLeaf fpga5;
        static const Enum::YLeaf fpga6;
        static const Enum::YLeaf fpga7;
        static const Enum::YLeaf fpga8;
        static const Enum::YLeaf fpga9;
        static const Enum::YLeaf fpga10;
        static const Enum::YLeaf fpga11;
        static const Enum::YLeaf fpga12;
        static const Enum::YLeaf fpga13;
        static const Enum::YLeaf fpga14;
        static const Enum::YLeaf cpld1;
        static const Enum::YLeaf cpld2;
        static const Enum::YLeaf cpld3;
        static const Enum::YLeaf cpld4;
        static const Enum::YLeaf cpld5;
        static const Enum::YLeaf cpld6;
        static const Enum::YLeaf cbc;
        static const Enum::YLeaf hsbi;
        static const Enum::YLeaf txpod;
        static const Enum::YLeaf rxpod;
        static const Enum::YLeaf ibmc;
        static const Enum::YLeaf fsbl;
        static const Enum::YLeaf lnx;
        static const Enum::YLeaf fpga15;
        static const Enum::YLeaf fpga16;
        static const Enum::YLeaf fc_fsbl;
        static const Enum::YLeaf fc_lnx;

};

class FpdEnum : public Enum
{
    public:
        static const Enum::YLeaf spa;
        static const Enum::YLeaf lc;
        static const Enum::YLeaf sam;

};

class Fpd1Enum : public Enum
{
    public:
        static const Enum::YLeaf spa;
        static const Enum::YLeaf lc;
        static const Enum::YLeaf sam;

};

class FpdSubEnum : public Enum
{
    public:
        static const Enum::YLeaf fpga1;
        static const Enum::YLeaf rommon;
        static const Enum::YLeaf rommona;
        static const Enum::YLeaf fabldr;
        static const Enum::YLeaf fpga2;
        static const Enum::YLeaf fpga3;
        static const Enum::YLeaf fpga4;
        static const Enum::YLeaf fpga5;
        static const Enum::YLeaf fpga6;
        static const Enum::YLeaf fpga7;
        static const Enum::YLeaf fpga8;
        static const Enum::YLeaf fpga9;
        static const Enum::YLeaf fpga10;
        static const Enum::YLeaf fpga11;
        static const Enum::YLeaf fpga12;
        static const Enum::YLeaf fpga13;
        static const Enum::YLeaf fpga14;
        static const Enum::YLeaf cpld1;
        static const Enum::YLeaf cpld2;
        static const Enum::YLeaf cpld3;
        static const Enum::YLeaf cpld4;
        static const Enum::YLeaf cpld5;
        static const Enum::YLeaf cpld6;
        static const Enum::YLeaf cbc;
        static const Enum::YLeaf hsbi;
        static const Enum::YLeaf txpod;
        static const Enum::YLeaf rxpod;
        static const Enum::YLeaf ibmc;
        static const Enum::YLeaf fsbl;
        static const Enum::YLeaf lnx;
        static const Enum::YLeaf fpga15;
        static const Enum::YLeaf fpga16;
        static const Enum::YLeaf fc_fsbl;
        static const Enum::YLeaf fc_lnx;

};


}
}

#endif /* _CISCO_IOS_XR_UPGRADE_FPD_OPER_ */

