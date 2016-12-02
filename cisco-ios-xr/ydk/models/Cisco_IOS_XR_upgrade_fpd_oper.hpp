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
                Value node_name; //type: string


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
                        Value fpd_type; //type: FpdEnum
                        Value instance; //type: int32
                        Value sub_type; //type: FpdSubEnum
                        Value card_type; //type: string
                        Value hardware_version; //type: string
                        Value software_version; //type: string
                        Value is_upgrade_downgrade; //type: boolean


                        class FpdEnum;
                        class FpdSubEnum;


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
                Value card_type; //type: string
                Value card_description; //type: string
                Value fpd_type; //type: Fpd1Enum
                Value fpd_sub_type; //type: FpdSub1Enum
                Value software_version; //type: string
                Value minimum_required_software_version; //type: string
                Value minimum_required_hardware_version; //type: string


                class FpdSub1Enum;
                class Fpd1Enum;


        }; // Fpd::Packages::AllPackage


            std::vector<std::unique_ptr<Cisco_IOS_XR_upgrade_fpd_oper::Fpd::Packages::AllPackage> > all_package;


    }; // Fpd::Packages


        std::unique_ptr<Cisco_IOS_XR_upgrade_fpd_oper::Fpd::Nodes> nodes;
        std::unique_ptr<Cisco_IOS_XR_upgrade_fpd_oper::Fpd::Packages> packages;


}; // Fpd


class FpdSub1Enum : public Enum
{
    public:
        static const Enum::Value fpga1;
        static const Enum::Value rommon;
        static const Enum::Value rommona;
        static const Enum::Value fabric_loader;
        static const Enum::Value fpga2;
        static const Enum::Value fpga3;
        static const Enum::Value fpga4;
        static const Enum::Value fpga5;
        static const Enum::Value fpga6;
        static const Enum::Value fpga7;
        static const Enum::Value fpga8;
        static const Enum::Value fpga9;
        static const Enum::Value fpga10;
        static const Enum::Value fpga11;
        static const Enum::Value fpga12;
        static const Enum::Value fpga13;
        static const Enum::Value fpga14;
        static const Enum::Value cpld1;
        static const Enum::Value cpld2;
        static const Enum::Value cpld3;
        static const Enum::Value cpld4;
        static const Enum::Value cpld5;
        static const Enum::Value cpld6;
        static const Enum::Value cbc;
        static const Enum::Value hsbi;
        static const Enum::Value txpod;
        static const Enum::Value rxpod;
        static const Enum::Value ibmc;
        static const Enum::Value fsbl;
        static const Enum::Value lnx;
        static const Enum::Value fpga15;
        static const Enum::Value fpga16;
        static const Enum::Value fc_fsbl;
        static const Enum::Value fc_lnx;

};

class FpdEnum : public Enum
{
    public:
        static const Enum::Value spa;
        static const Enum::Value lc;
        static const Enum::Value sam;

};

class Fpd1Enum : public Enum
{
    public:
        static const Enum::Value spa;
        static const Enum::Value lc;
        static const Enum::Value sam;

};

class FpdSubEnum : public Enum
{
    public:
        static const Enum::Value fpga1;
        static const Enum::Value rommon;
        static const Enum::Value rommona;
        static const Enum::Value fabldr;
        static const Enum::Value fpga2;
        static const Enum::Value fpga3;
        static const Enum::Value fpga4;
        static const Enum::Value fpga5;
        static const Enum::Value fpga6;
        static const Enum::Value fpga7;
        static const Enum::Value fpga8;
        static const Enum::Value fpga9;
        static const Enum::Value fpga10;
        static const Enum::Value fpga11;
        static const Enum::Value fpga12;
        static const Enum::Value fpga13;
        static const Enum::Value fpga14;
        static const Enum::Value cpld1;
        static const Enum::Value cpld2;
        static const Enum::Value cpld3;
        static const Enum::Value cpld4;
        static const Enum::Value cpld5;
        static const Enum::Value cpld6;
        static const Enum::Value cbc;
        static const Enum::Value hsbi;
        static const Enum::Value txpod;
        static const Enum::Value rxpod;
        static const Enum::Value ibmc;
        static const Enum::Value fsbl;
        static const Enum::Value lnx;
        static const Enum::Value fpga15;
        static const Enum::Value fpga16;
        static const Enum::Value fc_fsbl;
        static const Enum::Value fc_lnx;

};


}
}

#endif /* _CISCO_IOS_XR_UPGRADE_FPD_OPER_ */

