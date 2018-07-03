#ifndef _CISCO_IOS_XR_COFO_CSI_MA_OPER_
#define _CISCO_IOS_XR_COFO_CSI_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_cofo_csi_ma_oper {

class CrossSdrIntfMa : public ydk::Entity
{
    public:
        CrossSdrIntfMa();
        ~CrossSdrIntfMa();

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

        class Nodes; //type: CrossSdrIntfMa::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_csi_ma_oper::CrossSdrIntfMa::Nodes> nodes;
        
}; // CrossSdrIntfMa


class CrossSdrIntfMa::Nodes : public ydk::Entity
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

        class Node; //type: CrossSdrIntfMa::Nodes::Node

        ydk::YList node;
        
}; // CrossSdrIntfMa::Nodes


class CrossSdrIntfMa::Nodes::Node : public ydk::Entity
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
        class RackIds; //type: CrossSdrIntfMa::Nodes::Node::RackIds
        class CsiIndexes; //type: CrossSdrIntfMa::Nodes::Node::CsiIndexes
        class InterfaceNames; //type: CrossSdrIntfMa::Nodes::Node::InterfaceNames
        class Global; //type: CrossSdrIntfMa::Nodes::Node::Global
        class SdrIds; //type: CrossSdrIntfMa::Nodes::Node::SdrIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_csi_ma_oper::CrossSdrIntfMa::Nodes::Node::RackIds> rack_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_csi_ma_oper::CrossSdrIntfMa::Nodes::Node::CsiIndexes> csi_indexes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_csi_ma_oper::CrossSdrIntfMa::Nodes::Node::InterfaceNames> interface_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_csi_ma_oper::CrossSdrIntfMa::Nodes::Node::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_csi_ma_oper::CrossSdrIntfMa::Nodes::Node::SdrIds> sdr_ids;
        
}; // CrossSdrIntfMa::Nodes::Node


class CrossSdrIntfMa::Nodes::Node::RackIds : public ydk::Entity
{
    public:
        RackIds();
        ~RackIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RackId; //type: CrossSdrIntfMa::Nodes::Node::RackIds::RackId

        ydk::YList rack_id;
        
}; // CrossSdrIntfMa::Nodes::Node::RackIds


class CrossSdrIntfMa::Nodes::Node::RackIds::RackId : public ydk::Entity
{
    public:
        RackId();
        ~RackId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_id; //type: uint32
        class SlotId; //type: CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId

        ydk::YList slot_id;
        
}; // CrossSdrIntfMa::Nodes::Node::RackIds::RackId


class CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId : public ydk::Entity
{
    public:
        SlotId();
        ~SlotId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot_id; //type: uint32
        ydk::YLeaf rack_slot_id; //type: uint64
        ydk::YLeaf node_id; //type: uint32
        ydk::YLeaf node_up; //type: boolean
        class SliceArr; //type: CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr

        ydk::YList slice_arr;
        
}; // CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId


class CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr : public ydk::Entity
{
    public:
        SliceArr();
        ~SliceArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_node_id; //type: uint32
        ydk::YLeaf admin_up; //type: boolean
        ydk::YLeaf oper_up; //type: boolean
        ydk::YLeaf pic; //type: uint64
        ydk::YLeafList csi_pic_arr; //type: list of  uint64

}; // CrossSdrIntfMa::Nodes::Node::RackIds::RackId::SlotId::SliceArr


class CrossSdrIntfMa::Nodes::Node::CsiIndexes : public ydk::Entity
{
    public:
        CsiIndexes();
        ~CsiIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CsiIndex; //type: CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex

        ydk::YList csi_index;
        
}; // CrossSdrIntfMa::Nodes::Node::CsiIndexes


class CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex : public ydk::Entity
{
    public:
        CsiIndex();
        ~CsiIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csi_index; //type: uint32
        ydk::YLeaf csi_index_xr; //type: uint32
        ydk::YLeaf sdr_id; //type: uint32
        ydk::YLeaf peer_sdr_id; //type: uint32
        ydk::YLeaf peer_sdr_name; //type: string
        ydk::YLeaf item_state; //type: CsiMaItemState
        ydk::YLeaf csi_helper_reg; //type: boolean

}; // CrossSdrIntfMa::Nodes::Node::CsiIndexes::CsiIndex


class CrossSdrIntfMa::Nodes::Node::InterfaceNames : public ydk::Entity
{
    public:
        InterfaceNames();
        ~InterfaceNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceName; //type: CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName

        ydk::YList interface_name;
        
}; // CrossSdrIntfMa::Nodes::Node::InterfaceNames


class CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName : public ydk::Entity
{
    public:
        InterfaceName();
        ~InterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csi_index; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf handle; //type: string
        ydk::YLeaf csi_index_xr; //type: uint32
        ydk::YLeaf sdr_id; //type: uint32
        ydk::YLeaf peer_sdr_id; //type: uint32
        ydk::YLeaf repl_handle; //type: uint32
        ydk::YLeaf repl_fail_count; //type: uint32
        ydk::YLeaf item_state; //type: CsiMaItemState
        ydk::YLeaf if_state; //type: uint32
        ydk::YLeaf rem_slice_attr; //type: boolean
        ydk::YLeaf rem_ip_attr; //type: boolean
        class PubData; //type: CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData
        class LocalIpArr; //type: CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr
        class PeerIpArr; //type: CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_csi_ma_oper::CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData> pub_data;
        ydk::YList local_ip_arr;
        ydk::YList peer_ip_arr;
        
}; // CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName


class CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData : public ydk::Entity
{
    public:
        PubData();
        ~PubData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList csi_pic_arr; //type: list of  uint64
        class CsiInfoArr; //type: CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr

        ydk::YList csi_info_arr;
        
}; // CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData


class CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr : public ydk::Entity
{
    public:
        CsiInfoArr();
        ~CsiInfoArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csi_index; //type: uint32
        class IpArr; //type: CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr

        ydk::YList ip_arr;
        
}; // CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr


class CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr : public ydk::Entity
{
    public:
        IpArr();
        ~IpArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: CsiMaAfi
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PubData::CsiInfoArr::IpArr


class CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr : public ydk::Entity
{
    public:
        LocalIpArr();
        ~LocalIpArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: CsiMaAfi
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::LocalIpArr


class CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr : public ydk::Entity
{
    public:
        PeerIpArr();
        ~PeerIpArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: CsiMaAfi
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // CrossSdrIntfMa::Nodes::Node::InterfaceNames::InterfaceName::PeerIpArr


class CrossSdrIntfMa::Nodes::Node::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf invmgr_conn_state; //type: CsiMaConnState
        ydk::YLeaf fail_over_timer_state; //type: CsiMaFoTimerState
        ydk::YLeaf own_im_conn_state; //type: CsiMaConnState
        ydk::YLeaf gdp_im_conn_state; //type: CsiMaConnState
        ydk::YLeaf l3p_im_conn_state; //type: CsiMaConnState

}; // CrossSdrIntfMa::Nodes::Node::Global


class CrossSdrIntfMa::Nodes::Node::SdrIds : public ydk::Entity
{
    public:
        SdrIds();
        ~SdrIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SdrId; //type: CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId

        ydk::YList sdr_id;
        
}; // CrossSdrIntfMa::Nodes::Node::SdrIds


class CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId : public ydk::Entity
{
    public:
        SdrId();
        ~SdrId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sdr_id; //type: uint32
        ydk::YLeaf sdr_id_xr; //type: uint32
        ydk::YLeaf item_state; //type: CsiMaItemState
        class PubData; //type: CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_cofo_csi_ma_oper::CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData> pub_data;
        
}; // CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId


class CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData : public ydk::Entity
{
    public:
        PubData();
        ~PubData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList csi_pic_arr; //type: list of  uint64
        class CsiInfoArr; //type: CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr

        ydk::YList csi_info_arr;
        
}; // CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData


class CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr : public ydk::Entity
{
    public:
        CsiInfoArr();
        ~CsiInfoArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csi_index; //type: uint32
        class IpArr; //type: CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr

        ydk::YList ip_arr;
        
}; // CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr


class CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr : public ydk::Entity
{
    public:
        IpArr();
        ~IpArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: CsiMaAfi
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // CrossSdrIntfMa::Nodes::Node::SdrIds::SdrId::PubData::CsiInfoArr::IpArr

class CsiMaFoTimerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csi_ma_fo_default;
        static const ydk::Enum::YLeaf csi_ma_fo_push_self_data;
        static const ydk::Enum::YLeaf csi_ma_fo_sync_rem_data;
        static const ydk::Enum::YLeaf csi_ma_fo_synced;
        static const ydk::Enum::YLeaf csi_ma_fo_max;

};

class CsiMaAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csi_afi_ipv4;
        static const ydk::Enum::YLeaf csi_afi_ipv6;
        static const ydk::Enum::YLeaf csi_afi_invalid;

};

class CsiMaItemState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csi_ma_item_create_req;
        static const ydk::Enum::YLeaf csi_ma_item_attr_req;
        static const ydk::Enum::YLeaf csi_ma_item_valid;
        static const ydk::Enum::YLeaf csi_ma_item_synced;
        static const ydk::Enum::YLeaf csi_ma_item_mark_ed;
        static const ydk::Enum::YLeaf csi_ma_item_invalid;
        static const ydk::Enum::YLeaf csi_ma_item_delete_req;
        static const ydk::Enum::YLeaf csi_ma_item_max_states;

};

class CsiMaConnState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csi_ma_conn_default;
        static const ydk::Enum::YLeaf csi_ma_conn_closed;
        static const ydk::Enum::YLeaf csi_ma_conn_opened;
        static const ydk::Enum::YLeaf csi_ma_conn_synced;
        static const ydk::Enum::YLeaf csi_ma_conn_max;

};


}
}

#endif /* _CISCO_IOS_XR_COFO_CSI_MA_OPER_ */

