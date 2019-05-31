#ifndef _CISCO_IOS_XR_L2VPN_OPER_39_
#define _CISCO_IOS_XR_L2VPN_OPER_39_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_38.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {


class GenericInterfaceListV2::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        class GenericInterfaceLists; //type: GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists> generic_interface_lists;
        
}; // GenericInterfaceListV2::Nodes::Node


class GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists : public ydk::Entity
{
    public:
        GenericInterfaceLists();
        ~GenericInterfaceLists();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GenericInterfaceList; //type: GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList

        ydk::YList generic_interface_list;
        
}; // GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists


class GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList : public ydk::Entity
{
    public:
        GenericInterfaceList();
        ~GenericInterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf generic_interface_list_name; //type: string
        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        ydk::YLeaf items; //type: uint32
        ydk::YLeaf is_provisioned; //type: boolean
        ydk::YLeaf is_fib_downloaded; //type: boolean
        class Interface; //type: GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface

        ydk::YList interface;
        
}; // GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList


class GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf pending_replications; //type: uint32
        ydk::YLeaf not_supported_replications; //type: uint32
        ydk::YLeaf is_fib_downloaded; //type: boolean

}; // GenericInterfaceListV2::Nodes::Node::GenericInterfaceLists::GenericInterfaceList::Interface


class GenericInterfaceListV2::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class GenericInterfaceLists; //type: GenericInterfaceListV2::Standby::GenericInterfaceLists

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Standby::GenericInterfaceLists> generic_interface_lists;
        
}; // GenericInterfaceListV2::Standby


class GenericInterfaceListV2::Standby::GenericInterfaceLists : public ydk::Entity
{
    public:
        GenericInterfaceLists();
        ~GenericInterfaceLists();

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

        class GenericInterfaceList; //type: GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList

        ydk::YList generic_interface_list;
        
}; // GenericInterfaceListV2::Standby::GenericInterfaceLists


class GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList : public ydk::Entity
{
    public:
        GenericInterfaceList();
        ~GenericInterfaceList();

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

        ydk::YLeaf generic_interface_list_name; //type: string
        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        ydk::YLeaf items; //type: uint32
        ydk::YLeaf is_provisioned; //type: boolean
        ydk::YLeaf is_fib_downloaded; //type: boolean
        class Interface; //type: GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface

        ydk::YList interface;
        
}; // GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList


class GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf pending_replications; //type: uint32
        ydk::YLeaf not_supported_replications; //type: uint32
        ydk::YLeaf is_fib_downloaded; //type: boolean

}; // GenericInterfaceListV2::Standby::GenericInterfaceLists::GenericInterfaceList::Interface


class GenericInterfaceListV2::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class GenericInterfaceLists; //type: GenericInterfaceListV2::Active::GenericInterfaceLists

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2::Active::GenericInterfaceLists> generic_interface_lists;
        
}; // GenericInterfaceListV2::Active


class GenericInterfaceListV2::Active::GenericInterfaceLists : public ydk::Entity
{
    public:
        GenericInterfaceLists();
        ~GenericInterfaceLists();

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

        class GenericInterfaceList; //type: GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList

        ydk::YList generic_interface_list;
        
}; // GenericInterfaceListV2::Active::GenericInterfaceLists


class GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList : public ydk::Entity
{
    public:
        GenericInterfaceList();
        ~GenericInterfaceList();

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

        ydk::YLeaf generic_interface_list_name; //type: string
        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf interface_list_id; //type: uint32
        ydk::YLeaf items; //type: uint32
        ydk::YLeaf is_provisioned; //type: boolean
        ydk::YLeaf is_fib_downloaded; //type: boolean
        class Interface; //type: GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface

        ydk::YList interface;
        
}; // GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList


class GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf pending_replications; //type: uint32
        ydk::YLeaf not_supported_replications; //type: uint32
        ydk::YLeaf is_fib_downloaded; //type: boolean

}; // GenericInterfaceListV2::Active::GenericInterfaceLists::GenericInterfaceList::Interface


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_39_ */

