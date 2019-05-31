#ifndef _CISCO_IOS_XR_UPGRADE_FPD_OPER_
#define _CISCO_IOS_XR_UPGRADE_FPD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_upgrade_fpd_oper {

class Fpd_ : public ydk::Entity
{
    public:
        Fpd_();
        ~Fpd_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: Fpd_::Nodes
        class Packages; //type: Fpd_::Packages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_upgrade_fpd_oper::Fpd_::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_upgrade_fpd_oper::Fpd_::Packages> packages;
        
}; // Fpd_


class Fpd_::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: Fpd_::Nodes::Node

        ydk::YList node;
        
}; // Fpd_::Nodes


class Fpd_::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class Devices; //type: Fpd_::Nodes::Node::Devices

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_upgrade_fpd_oper::Fpd_::Nodes::Node::Devices> devices;
        
}; // Fpd_::Nodes::Node


class Fpd_::Nodes::Node::Devices : public ydk::Entity
{
    public:
        Devices();
        ~Devices();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Device; //type: Fpd_::Nodes::Node::Devices::Device

        ydk::YList device;
        
}; // Fpd_::Nodes::Node::Devices


class Fpd_::Nodes::Node::Devices::Device : public ydk::Entity
{
    public:
        Device();
        ~Device();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fpd_type; //type: Fpd
        ydk::YLeaf instance; //type: uint32
        ydk::YLeaf sub_type; //type: FpdSub
        ydk::YLeaf card_type; //type: string
        ydk::YLeaf hardware_version; //type: string
        ydk::YLeaf software_version; //type: string
        ydk::YLeaf is_upgrade_downgrade; //type: boolean

}; // Fpd_::Nodes::Node::Devices::Device


class Fpd_::Packages : public ydk::Entity
{
    public:
        Packages();
        ~Packages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AllPackage; //type: Fpd_::Packages::AllPackage

        ydk::YList all_package;
        
}; // Fpd_::Packages


class Fpd_::Packages::AllPackage : public ydk::Entity
{
    public:
        AllPackage();
        ~AllPackage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf card_type; //type: string
        ydk::YLeaf card_description; //type: string
        ydk::YLeaf fpd_type; //type: Fpd1
        ydk::YLeaf fpd_sub_type; //type: FpdSub1
        ydk::YLeaf software_version; //type: string
        ydk::YLeaf minimum_required_software_version; //type: string
        ydk::YLeaf minimum_required_hardware_version; //type: string

}; // Fpd_::Packages::AllPackage

class FpdSub : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fpga1;
        static const ydk::Enum::YLeaf rommon;
        static const ydk::Enum::YLeaf rommona;
        static const ydk::Enum::YLeaf fabldr;
        static const ydk::Enum::YLeaf fpga2;
        static const ydk::Enum::YLeaf fpga3;
        static const ydk::Enum::YLeaf fpga4;
        static const ydk::Enum::YLeaf fpga5;
        static const ydk::Enum::YLeaf fpga6;
        static const ydk::Enum::YLeaf fpga7;
        static const ydk::Enum::YLeaf fpga8;
        static const ydk::Enum::YLeaf fpga9;
        static const ydk::Enum::YLeaf fpga10;
        static const ydk::Enum::YLeaf fpga11;
        static const ydk::Enum::YLeaf fpga12;
        static const ydk::Enum::YLeaf fpga13;
        static const ydk::Enum::YLeaf fpga14;
        static const ydk::Enum::YLeaf cpld1;
        static const ydk::Enum::YLeaf cpld2;
        static const ydk::Enum::YLeaf cpld3;
        static const ydk::Enum::YLeaf cpld4;
        static const ydk::Enum::YLeaf cpld5;
        static const ydk::Enum::YLeaf cpld6;
        static const ydk::Enum::YLeaf cbc;
        static const ydk::Enum::YLeaf hsbi;
        static const ydk::Enum::YLeaf txpod;
        static const ydk::Enum::YLeaf rxpod;
        static const ydk::Enum::YLeaf ibmc;
        static const ydk::Enum::YLeaf fsbl;
        static const ydk::Enum::YLeaf lnx;
        static const ydk::Enum::YLeaf fpga15;
        static const ydk::Enum::YLeaf fpga16;
        static const ydk::Enum::YLeaf fc_fsbl;
        static const ydk::Enum::YLeaf fc_lnx;

};

class Fpd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spa;
        static const ydk::Enum::YLeaf lc;
        static const ydk::Enum::YLeaf sam;

};

class FpdSub1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fpga1;
        static const ydk::Enum::YLeaf rommon;
        static const ydk::Enum::YLeaf rommona;
        static const ydk::Enum::YLeaf fabric_loader;
        static const ydk::Enum::YLeaf fpga2;
        static const ydk::Enum::YLeaf fpga3;
        static const ydk::Enum::YLeaf fpga4;
        static const ydk::Enum::YLeaf fpga5;
        static const ydk::Enum::YLeaf fpga6;
        static const ydk::Enum::YLeaf fpga7;
        static const ydk::Enum::YLeaf fpga8;
        static const ydk::Enum::YLeaf fpga9;
        static const ydk::Enum::YLeaf fpga10;
        static const ydk::Enum::YLeaf fpga11;
        static const ydk::Enum::YLeaf fpga12;
        static const ydk::Enum::YLeaf fpga13;
        static const ydk::Enum::YLeaf fpga14;
        static const ydk::Enum::YLeaf cpld1;
        static const ydk::Enum::YLeaf cpld2;
        static const ydk::Enum::YLeaf cpld3;
        static const ydk::Enum::YLeaf cpld4;
        static const ydk::Enum::YLeaf cpld5;
        static const ydk::Enum::YLeaf cpld6;
        static const ydk::Enum::YLeaf cbc;
        static const ydk::Enum::YLeaf hsbi;
        static const ydk::Enum::YLeaf txpod;
        static const ydk::Enum::YLeaf rxpod;
        static const ydk::Enum::YLeaf ibmc;
        static const ydk::Enum::YLeaf fsbl;
        static const ydk::Enum::YLeaf lnx;
        static const ydk::Enum::YLeaf fpga15;
        static const ydk::Enum::YLeaf fpga16;
        static const ydk::Enum::YLeaf fc_fsbl;
        static const ydk::Enum::YLeaf fc_lnx;

};

class Fpd1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spa;
        static const ydk::Enum::YLeaf lc;
        static const ydk::Enum::YLeaf sam;

};


}
}

#endif /* _CISCO_IOS_XR_UPGRADE_FPD_OPER_ */

