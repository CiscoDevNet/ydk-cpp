#ifndef _CISCO_NX_OS_DEVICE_49_
#define _CISCO_NX_OS_DEVICE_49_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_48.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::ActionItems::LsubjItems::LSubjList::PingexectnItems : public ydk::Entity
{
    public:
        PingexectnItems();
        ~PingexectnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExecTnList; //type: System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList

        ydk::YList exectn_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingexectnItems


class System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList : public ydk::Entity
{
    public:
        ExecTnList();
        ~ExecTnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tenant; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: one of uint64, string
        ydk::YLeaf ept; //type: OamEpT
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf vtep; //type: string
        ydk::YLeaf vtepencap; //type: string
        ydk::YLeaf operst; //type: ActionOperSt

}; // System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList


class System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems : public ydk::Entity
{
    public:
        PingrsltfabItems();
        ~PingrsltfabItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltFabList; //type: System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList

        ydk::YList rsltfab_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems


class System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList : public ydk::Entity
{
    public:
        RsltFabList();
        ~RsltFabList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf dstnodeid; //type: uint16
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf tenant; //type: string
        ydk::YLeaf payloadsz; //type: uint16

}; // System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList


class System::ActionItems::LsubjItems::LSubjList::PingrslttnItems : public ydk::Entity
{
    public:
        PingrslttnItems();
        ~PingrslttnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltTnList; //type: System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList

        ydk::YList rslttn_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingrslttnItems


class System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList : public ydk::Entity
{
    public:
        RsltTnList();
        ~RsltTnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tenant; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf payloadsz; //type: uint16

}; // System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList


class System::ActionItems::LsubjItems::LSubjList::TrexecfabItems : public ydk::Entity
{
    public:
        TrexecfabItems();
        ~TrexecfabItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExecFabList; //type: System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList

        ydk::YList execfab_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrexecfabItems


class System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList : public ydk::Entity
{
    public:
        ExecFabList();
        ~ExecFabList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf dstnodeid; //type: uint16
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: one of uint64, string
        ydk::YLeaf ept; //type: OamEpT
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        ydk::YLeaf tenant; //type: string
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf vtep; //type: string
        ydk::YLeaf vtepencap; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf maxpaths; //type: uint16
        ydk::YLeaf maxhops; //type: uint8

}; // System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList


class System::ActionItems::LsubjItems::LSubjList::TrexectnItems : public ydk::Entity
{
    public:
        TrexectnItems();
        ~TrexectnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExecTnList; //type: System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList

        ydk::YList exectn_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrexectnItems


class System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList : public ydk::Entity
{
    public:
        ExecTnList();
        ~ExecTnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tenant; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf gwmac; //type: string
        ydk::YLeaf usegwmac; //type: boolean
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: one of uint64, string
        ydk::YLeaf ept; //type: OamEpT
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf vtep; //type: string
        ydk::YLeaf vtepencap; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf maxpaths; //type: uint16
        ydk::YLeaf maxhops; //type: uint8

}; // System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems : public ydk::Entity
{
    public:
        TrrsltfabItems();
        ~TrrsltfabItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltFabList; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList

        ydk::YList rsltfab_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList : public ydk::Entity
{
    public:
        RsltFabList();
        ~RsltFabList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf dstnodeid; //type: uint16
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf tenant; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        class PgrpItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems> pgrp_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems : public ydk::Entity
{
    public:
        PgrpItems();
        ~PgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathGrpList; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList

        ydk::YList pathgrp_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList : public ydk::Entity
{
    public:
        PathGrpList();
        ~PathGrpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class PathItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems> path_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf type; //type: TraceroutePathT
        ydk::YLeaf flags; //type: string
        class NodeItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems> node_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems : public ydk::Entity
{
    public:
        NodeItems();
        ~NodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeList; //type: System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList

        ydk::YList node_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems


class System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList : public ydk::Entity
{
    public:
        NodeList();
        ~NodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems : public ydk::Entity
{
    public:
        TrrslttnItems();
        ~TrrslttnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltTnList; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList

        ydk::YList rslttn_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList : public ydk::Entity
{
    public:
        RsltTnList();
        ~RsltTnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tenant; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf srcnodeid; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf payloadsz; //type: uint16
        class PgrpItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems> pgrp_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems : public ydk::Entity
{
    public:
        PgrpItems();
        ~PgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathGrpList; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList

        ydk::YList pathgrp_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList : public ydk::Entity
{
    public:
        PathGrpList();
        ~PathGrpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class PathItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems> path_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf type; //type: TraceroutePathT
        ydk::YLeaf flags; //type: string
        class NodeItems; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems> node_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems : public ydk::Entity
{
    public:
        NodeItems();
        ~NodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeList; //type: System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList

        ydk::YList node_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems


class System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList : public ydk::Entity
{
    public:
        NodeList();
        ~NodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList


class System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems : public ydk::Entity
{
    public:
        ImginsttaskrsltItems();
        ~ImginsttaskrsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltList; //type: System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList

        ydk::YList rslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems


class System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList : public ydk::Entity
{
    public:
        RsltList();
        ~RsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt

}; // System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList


class System::ActionItems::LsubjItems::LSubjList::TrkipItems : public ydk::Entity
{
    public:
        TrkipItems();
        ~TrkipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpEpExecList; //type: System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList

        ydk::YList ipepexec_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems


class System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList : public ydk::Entity
{
    public:
        IpEpExecList();
        ~IpEpExecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: one of uint64, string
        class IprsltItems; //type: System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems> iprslt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList


class System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems : public ydk::Entity
{
    public:
        IprsltItems();
        ~IprsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpEpRsltList; //type: System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList

        ydk::YList ipeprslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems


class System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList : public ydk::Entity
{
    public:
        IpEpRsltList();
        ~IpEpRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        class RsipEpRslttoIpEpAttItems; //type: System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems> rsipeprslttoipepatt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList


class System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RsipEpRslttoIpEpAttItems();
        ~RsipEpRslttoIpEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems


class System::ActionItems::LsubjItems::LSubjList::TrkmacItems : public ydk::Entity
{
    public:
        TrkmacItems();
        ~TrkmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacEpExecList; //type: System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList

        ydk::YList macepexec_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkmacItems


class System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList : public ydk::Entity
{
    public:
        MacEpExecList();
        ~MacEpExecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: one of uint64, string
        class MacrsltItems; //type: System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems> macrslt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList


class System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems : public ydk::Entity
{
    public:
        MacrsltItems();
        ~MacrsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacEpRsltList; //type: System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList

        ydk::YList maceprslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems


class System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList : public ydk::Entity
{
    public:
        MacEpRsltList();
        ~MacEpRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        class RsmacEpRslttoIpEpAttItems; //type: System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems> rsmaceprslttoipepatt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList


class System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RsmacEpRslttoIpEpAttItems();
        ~RsmacEpRslttoIpEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMacEpRslttoIpEpAttList; //type: System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList

        ydk::YList rsmaceprslttoipepatt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems


class System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList : public ydk::Entity
{
    public:
        RsMacEpRslttoIpEpAttList();
        ~RsMacEpRslttoIpEpAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList


class System::ActionItems::LsubjItems::LSubjList::IprsltItems : public ydk::Entity
{
    public:
        IprsltItems();
        ~IprsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpEpRsltList; //type: System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList

        ydk::YList ipeprslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::IprsltItems


class System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList : public ydk::Entity
{
    public:
        IpEpRsltList();
        ~IpEpRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        class RsipEpRslttoIpEpAttItems; //type: System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems> rsipeprslttoipepatt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList


class System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RsipEpRslttoIpEpAttItems();
        ~RsipEpRslttoIpEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems


class System::ActionItems::LsubjItems::LSubjList::MacrsltItems : public ydk::Entity
{
    public:
        MacrsltItems();
        ~MacrsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacEpRsltList; //type: System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList

        ydk::YList maceprslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::MacrsltItems


class System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList : public ydk::Entity
{
    public:
        MacEpRsltList();
        ~MacEpRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        class RsmacEpRslttoIpEpAttItems; //type: System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems> rsmaceprslttoipepatt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList


class System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RsmacEpRslttoIpEpAttItems();
        ~RsmacEpRslttoIpEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMacEpRslttoIpEpAttList; //type: System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList

        ydk::YList rsmaceprslttoipepatt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems


class System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList : public ydk::Entity
{
    public:
        RsMacEpRslttoIpEpAttList();
        ~RsMacEpRslttoIpEpAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList


class System::ActionItems::LsubjItems::LSubjList::PingnversltItems : public ydk::Entity
{
    public:
        PingnversltItems();
        ~PingnversltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PingNveRsltList; //type: System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList

        ydk::YList pingnverslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PingnversltItems


class System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList : public ydk::Entity
{
    public:
        PingNveRsltList();
        ~PingNveRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessionid; //type: uint16
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf replyip; //type: string
        ydk::YLeaf replyipv6; //type: string
        ydk::YLeaf nodename; //type: string
        ydk::YLeaf errorcode; //type: string
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf sport; //type: uint16
        ydk::YLeaf packetsz; //type: uint16
        ydk::YLeaf sentpkts; //type: uint32
        ydk::YLeaf notsentpkts; //type: uint32
        ydk::YLeaf rcvdpkts; //type: uint32
        ydk::YLeaf minrtt; //type: uint32
        ydk::YLeaf avgrtt; //type: uint32
        ydk::YLeaf maxrtt; //type: uint32
        ydk::YLeaf totalrtt; //type: uint32

}; // System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList


class System::ActionItems::LsubjItems::LSubjList::TracertnveItems : public ydk::Entity
{
    public:
        TracertnveItems();
        ~TracertnveItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TraceRtNveList; //type: System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList

        ydk::YList tracertnve_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TracertnveItems


class System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList : public ydk::Entity
{
    public:
        TraceRtNveList();
        ~TraceRtNveList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: one of uint64, string
        ydk::YLeaf profileid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf dstipv6; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf srcipv6; //type: string
        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf srcport; //type: uint16
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf maxttl; //type: uint8
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf timeout; //type: uint8
        ydk::YLeaf egressif; //type: string
        ydk::YLeaf macsrcif; //type: string
        ydk::YLeaf verifyhost; //type: boolean
        ydk::YLeaf sessionid; //type: uint32
        ydk::YLeaf payload_dot1q; //type: uint16
        ydk::YLeaf payload_srcip; //type: string
        ydk::YLeaf payload_srcipv6; //type: string
        ydk::YLeaf payload_srcmac; //type: string
        ydk::YLeaf payload_dstip; //type: string
        ydk::YLeaf payload_dstipv6; //type: string
        ydk::YLeaf payload_dstmac; //type: string
        ydk::YLeaf payload_srcport; //type: uint16
        ydk::YLeaf payload_dstport; //type: uint16
        ydk::YLeaf payload_protocol; //type: uint16
        ydk::YLeaf payload_srcif; //type: string
        class TrnversltItems; //type: System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems> trnverslt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList


class System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems : public ydk::Entity
{
    public:
        TrnversltItems();
        ~TrnversltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TraceRtNveRsltList; //type: System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList

        ydk::YList tracertnverslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems


class System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList : public ydk::Entity
{
    public:
        TraceRtNveRsltList();
        ~TraceRtNveRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessionid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf errorcode; //type: string
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        class PathtrItems; //type: System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems> pathtr_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList


class System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems : public ydk::Entity
{
    public:
        PathtrItems();
        ~PathtrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathTrList; //type: System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList

        ydk::YList pathtr_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems


class System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList : public ydk::Entity
{
    public:
        PathTrList();
        ~PathTrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class NodetrItems; //type: System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems> nodetr_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList


class System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems : public ydk::Entity
{
    public:
        NodetrItems();
        ~NodetrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeTrList; //type: System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList

        ydk::YList nodetr_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems


class System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList : public ydk::Entity
{
    public:
        NodeTrList();
        ~NodeTrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string
        ydk::YLeaf v6addr; //type: string
        ydk::YLeaf elapsedtime; //type: one of uint64, string

}; // System::ActionItems::LsubjItems::LSubjList::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList


class System::ActionItems::LsubjItems::LSubjList::PathtracenveItems : public ydk::Entity
{
    public:
        PathtracenveItems();
        ~PathtracenveItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathTraceNveList; //type: System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList

        ydk::YList pathtracenve_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PathtracenveItems


class System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList : public ydk::Entity
{
    public:
        PathTraceNveList();
        ~PathTraceNveList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session; //type: string
        ydk::YLeaf reqstats; //type: boolean
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf adminst; //type: ActionAdminSt
        ydk::YLeaf freq; //type: one of uint64, string
        ydk::YLeaf profileid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf dstipv6; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf srcipv6; //type: string
        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf srcport; //type: uint16
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf maxttl; //type: uint8
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf timeout; //type: uint8
        ydk::YLeaf egressif; //type: string
        ydk::YLeaf macsrcif; //type: string
        ydk::YLeaf verifyhost; //type: boolean
        ydk::YLeaf sessionid; //type: uint32
        ydk::YLeaf payload_dot1q; //type: uint16
        ydk::YLeaf payload_srcip; //type: string
        ydk::YLeaf payload_srcipv6; //type: string
        ydk::YLeaf payload_srcmac; //type: string
        ydk::YLeaf payload_dstip; //type: string
        ydk::YLeaf payload_dstipv6; //type: string
        ydk::YLeaf payload_dstmac; //type: string
        ydk::YLeaf payload_srcport; //type: uint16
        ydk::YLeaf payload_dstport; //type: uint16
        ydk::YLeaf payload_protocol; //type: uint16
        ydk::YLeaf payload_srcif; //type: string
        class PtrnversltItems; //type: System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems> ptrnverslt_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList


class System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems : public ydk::Entity
{
    public:
        PtrnversltItems();
        ~PtrnversltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathTraceNveRsltList; //type: System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList

        ydk::YList pathtracenverslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems


class System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList : public ydk::Entity
{
    public:
        PathTraceNveRsltList();
        ~PathTraceNveRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessionid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf errorcode; //type: string
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        class PathptrItems; //type: System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems> pathptr_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList


class System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems : public ydk::Entity
{
    public:
        PathptrItems();
        ~PathptrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathPtrList; //type: System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList

        ydk::YList pathptr_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems


class System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList : public ydk::Entity
{
    public:
        PathPtrList();
        ~PathPtrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class NodeptrItems; //type: System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems> nodeptr_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList


class System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems : public ydk::Entity
{
    public:
        NodeptrItems();
        ~NodeptrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodePtrList; //type: System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList

        ydk::YList nodeptr_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems


class System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList : public ydk::Entity
{
    public:
        NodePtrList();
        ~NodePtrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string
        ydk::YLeaf v6addr; //type: string
        ydk::YLeaf nodename; //type: string
        ydk::YLeaf elapsedtime; //type: one of uint64, string
        ydk::YLeaf ingressif; //type: string
        ydk::YLeaf ingressifstate; //type: string
        ydk::YLeaf rxlen; //type: uint64
        ydk::YLeaf rxbytes; //type: uint64
        ydk::YLeaf rxpktrate; //type: uint64
        ydk::YLeaf rxbyterate; //type: uint64
        ydk::YLeaf rxload; //type: uint64
        ydk::YLeaf rxucast; //type: uint64
        ydk::YLeaf rxmcast; //type: uint64
        ydk::YLeaf rxbcast; //type: uint64
        ydk::YLeaf rxdiscards; //type: uint64
        ydk::YLeaf rxerrors; //type: uint64
        ydk::YLeaf rxunknown; //type: uint64
        ydk::YLeaf rxbandwidth; //type: uint32
        ydk::YLeaf egressif; //type: string
        ydk::YLeaf egressifstate; //type: string
        ydk::YLeaf txlen; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf txpktrate; //type: uint64
        ydk::YLeaf txbyterate; //type: uint64
        ydk::YLeaf txload; //type: uint64
        ydk::YLeaf txucast; //type: uint64
        ydk::YLeaf txmcast; //type: uint64
        ydk::YLeaf txbcast; //type: uint64
        ydk::YLeaf txdiscards; //type: uint64
        ydk::YLeaf txerrors; //type: uint64
        ydk::YLeaf txbandwidth; //type: uint32

}; // System::ActionItems::LsubjItems::LSubjList::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList


class System::ActionItems::LsubjItems::LSubjList::TrnversltItems : public ydk::Entity
{
    public:
        TrnversltItems();
        ~TrnversltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TraceRtNveRsltList; //type: System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList

        ydk::YList tracertnverslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrnversltItems


class System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList : public ydk::Entity
{
    public:
        TraceRtNveRsltList();
        ~TraceRtNveRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessionid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf errorcode; //type: string
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        class PathtrItems; //type: System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems> pathtr_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList


class System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems : public ydk::Entity
{
    public:
        PathtrItems();
        ~PathtrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathTrList; //type: System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList

        ydk::YList pathtr_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems


class System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList : public ydk::Entity
{
    public:
        PathTrList();
        ~PathTrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class NodetrItems; //type: System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems> nodetr_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList


class System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems : public ydk::Entity
{
    public:
        NodetrItems();
        ~NodetrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeTrList; //type: System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList

        ydk::YList nodetr_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems


class System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList : public ydk::Entity
{
    public:
        NodeTrList();
        ~NodeTrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string
        ydk::YLeaf v6addr; //type: string
        ydk::YLeaf elapsedtime; //type: one of uint64, string

}; // System::ActionItems::LsubjItems::LSubjList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList


class System::ActionItems::LsubjItems::LSubjList::PtrnversltItems : public ydk::Entity
{
    public:
        PtrnversltItems();
        ~PtrnversltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathTraceNveRsltList; //type: System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList

        ydk::YList pathtracenverslt_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PtrnversltItems


class System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList : public ydk::Entity
{
    public:
        PathTraceNveRsltList();
        ~PathTraceNveRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessionid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf errorcode; //type: string
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: one of uint64, string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: one of uint64, string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: one of uint64, string
        ydk::YLeaf operst; //type: ActionOperSt
        class PathptrItems; //type: System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems> pathptr_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList


class System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems : public ydk::Entity
{
    public:
        PathptrItems();
        ~PathptrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathPtrList; //type: System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList

        ydk::YList pathptr_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems


class System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList : public ydk::Entity
{
    public:
        PathPtrList();
        ~PathPtrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class NodeptrItems; //type: System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems> nodeptr_items;
        
}; // System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList


class System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems : public ydk::Entity
{
    public:
        NodeptrItems();
        ~NodeptrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodePtrList; //type: System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList

        ydk::YList nodeptr_list;
        
}; // System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems


class System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList : public ydk::Entity
{
    public:
        NodePtrList();
        ~NodePtrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint8
        ydk::YLeaf addr; //type: string
        ydk::YLeaf v6addr; //type: string
        ydk::YLeaf nodename; //type: string
        ydk::YLeaf elapsedtime; //type: one of uint64, string
        ydk::YLeaf ingressif; //type: string
        ydk::YLeaf ingressifstate; //type: string
        ydk::YLeaf rxlen; //type: uint64
        ydk::YLeaf rxbytes; //type: uint64
        ydk::YLeaf rxpktrate; //type: uint64
        ydk::YLeaf rxbyterate; //type: uint64
        ydk::YLeaf rxload; //type: uint64
        ydk::YLeaf rxucast; //type: uint64
        ydk::YLeaf rxmcast; //type: uint64
        ydk::YLeaf rxbcast; //type: uint64
        ydk::YLeaf rxdiscards; //type: uint64
        ydk::YLeaf rxerrors; //type: uint64
        ydk::YLeaf rxunknown; //type: uint64
        ydk::YLeaf rxbandwidth; //type: uint32
        ydk::YLeaf egressif; //type: string
        ydk::YLeaf egressifstate; //type: string
        ydk::YLeaf txlen; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf txpktrate; //type: uint64
        ydk::YLeaf txbyterate; //type: uint64
        ydk::YLeaf txload; //type: uint64
        ydk::YLeaf txucast; //type: uint64
        ydk::YLeaf txmcast; //type: uint64
        ydk::YLeaf txbcast; //type: uint64
        ydk::YLeaf txdiscards; //type: uint64
        ydk::YLeaf txerrors; //type: uint64
        ydk::YLeaf txbandwidth; //type: uint32

}; // System::ActionItems::LsubjItems::LSubjList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList


class System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems : public ydk::Entity
{
    public:
        RslSubjToDomainRefItems();
        ~RslSubjToDomainRefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems


class System::RtdbgexpTsSrcItems : public ydk::Entity
{
    public:
        RtdbgexpTsSrcItems();
        ~RtdbgexpTsSrcItems();

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

        class RtDbgexpTsSrcList; //type: System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList

        ydk::YList rtdbgexptssrc_list;
        
}; // System::RtdbgexpTsSrcItems


class System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList : public ydk::Entity
{
    public:
        RtDbgexpTsSrcList();
        ~RtDbgexpTsSrcList();

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

        ydk::YLeaf tdn; //type: string

}; // System::RtdbgexpTsSrcItems::RtDbgexpTsSrcList


class System::RttraceroutepTrSrcItems : public ydk::Entity
{
    public:
        RttraceroutepTrSrcItems();
        ~RttraceroutepTrSrcItems();

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

        class RtTraceroutepTrSrcList; //type: System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList

        ydk::YList rttracerouteptrsrc_list;
        
}; // System::RttraceroutepTrSrcItems


class System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList : public ydk::Entity
{
    public:
        RtTraceroutepTrSrcList();
        ~RtTraceroutepTrSrcList();

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

        ydk::YLeaf tdn; //type: string

}; // System::RttraceroutepTrSrcItems::RtTraceroutepTrSrcList


class System::RttraceroutepTrDstItems : public ydk::Entity
{
    public:
        RttraceroutepTrDstItems();
        ~RttraceroutepTrDstItems();

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

        class RtTraceroutepTrDstList; //type: System::RttraceroutepTrDstItems::RtTraceroutepTrDstList

        ydk::YList rttracerouteptrdst_list;
        
}; // System::RttraceroutepTrDstItems


class System::RttraceroutepTrDstItems::RtTraceroutepTrDstList : public ydk::Entity
{
    public:
        RtTraceroutepTrDstList();
        ~RtTraceroutepTrDstList();

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

        ydk::YLeaf tdn; //type: string

}; // System::RttraceroutepTrDstItems::RtTraceroutepTrDstList


class System::RtmaintFwinstlsrcItems : public ydk::Entity
{
    public:
        RtmaintFwinstlsrcItems();
        ~RtmaintFwinstlsrcItems();

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

        class RtMaintFwinstlsrcList; //type: System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList

        ydk::YList rtmaintfwinstlsrc_list;
        
}; // System::RtmaintFwinstlsrcItems


class System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList : public ydk::Entity
{
    public:
        RtMaintFwinstlsrcList();
        ~RtMaintFwinstlsrcList();

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

        ydk::YLeaf tdn; //type: string

}; // System::RtmaintFwinstlsrcItems::RtMaintFwinstlsrcList

class Cli : public ydk::Entity
{
    public:
        Cli();
        ~Cli();

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

        class Input; //type: Cli::Input
        class Output; //type: Cli::Output

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::Cli::Input> input;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::Cli::Output> output;
        
}; // Cli


class Cli::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf mode; //type: ClimodeT
        ydk::YLeaf cmdline; //type: string

}; // Cli::Input


class Cli::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf message; //type: string
        ydk::YLeaf data; //type: string

}; // Cli::Output

class InstallAllNxos : public ydk::Entity
{
    public:
        InstallAllNxos();
        ~InstallAllNxos();

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

        class Input; //type: InstallAllNxos::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::InstallAllNxos::Input> input;
        
}; // InstallAllNxos


class InstallAllNxos::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf nxos; //type: string
        ydk::YLeaf no_reload; //type: empty
        ydk::YLeaf noswitchover; //type: empty
        ydk::YLeaf bios; //type: empty
        ydk::YLeaf no_save; //type: empty
        ydk::YLeaf bios_force; //type: empty
        ydk::YLeaf non_interruptive; //type: empty

}; // InstallAllNxos::Input

class InstallForceAllNxos : public ydk::Entity
{
    public:
        InstallForceAllNxos();
        ~InstallForceAllNxos();

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

        class Input; //type: InstallForceAllNxos::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::InstallForceAllNxos::Input> input;
        
}; // InstallForceAllNxos


class InstallForceAllNxos::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf nxos; //type: string
        ydk::YLeaf no_reload; //type: empty
        ydk::YLeaf noswitchover; //type: empty
        ydk::YLeaf bios; //type: empty
        ydk::YLeaf no_save; //type: empty
        ydk::YLeaf bios_force; //type: empty
        ydk::YLeaf non_interruptive; //type: empty

}; // InstallForceAllNxos::Input

class InstallAdd : public ydk::Entity
{
    public:
        InstallAdd();
        ~InstallAdd();

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

        class Input; //type: InstallAdd::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::InstallAdd::Input> input;
        
}; // InstallAdd


class InstallAdd::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf add; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf upgrade; //type: empty
        ydk::YLeaf downgrade; //type: empty
        ydk::YLeaf initial; //type: empty
        ydk::YLeaf forced; //type: empty

}; // InstallAdd::Input

class InstallActivate : public ydk::Entity
{
    public:
        InstallActivate();
        ~InstallActivate();

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

        class Input; //type: InstallActivate::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::InstallActivate::Input> input;
        
}; // InstallActivate


class InstallActivate::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf activate; //type: string
        ydk::YLeaf forced; //type: empty

}; // InstallActivate::Input

class InstallDeactivate : public ydk::Entity
{
    public:
        InstallDeactivate();
        ~InstallDeactivate();

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

        class Input; //type: InstallDeactivate::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::InstallDeactivate::Input> input;
        
}; // InstallDeactivate


class InstallDeactivate::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf deactivate; //type: string
        ydk::YLeaf forced; //type: empty

}; // InstallDeactivate::Input

class InstallCommit : public ydk::Entity
{
    public:
        InstallCommit();
        ~InstallCommit();

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

        class Input; //type: InstallCommit::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::InstallCommit::Input> input;
        
}; // InstallCommit


class InstallCommit::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf commit; //type: string

}; // InstallCommit::Input

class InstallRemove : public ydk::Entity
{
    public:
        InstallRemove();
        ~InstallRemove();

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

        class Input; //type: InstallRemove::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::InstallRemove::Input> input;
        
}; // InstallRemove


class InstallRemove::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf remove; //type: one of identityref, string
        ydk::YLeaf inactive; //type: empty
        ydk::YLeaf forced; //type: empty

}; // InstallRemove::Input

class Copy : public ydk::Entity
{
    public:
        Copy();
        ~Copy();

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

        class Input; //type: Copy::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::Copy::Input> input;
        
}; // Copy


class Copy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf source; //type: string
        ydk::YLeaf destination; //type: string
        ydk::YLeaf recursive; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Copy::Input

class CopySrcLocal : public ydk::Entity
{
    public:
        CopySrcLocal();
        ~CopySrcLocal();

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

        class Input; //type: CopySrcLocal::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::CopySrcLocal::Input> input;
        
}; // CopySrcLocal


class CopySrcLocal::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf src_local; //type: string
        ydk::YLeaf dest_remote; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf dest_local; //type: string
        ydk::YLeaf running_config; //type: empty
        ydk::YLeaf echo_commands; //type: empty
        ydk::YLeaf stop_at_first_failure; //type: empty
        ydk::YLeaf startup_config; //type: empty
        ydk::YLeaf scheduled_config; //type: empty

}; // CopySrcLocal::Input

class CopySrcRemote : public ydk::Entity
{
    public:
        CopySrcRemote();
        ~CopySrcRemote();

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

        class Input; //type: CopySrcRemote::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::CopySrcRemote::Input> input;
        
}; // CopySrcRemote


class CopySrcRemote::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf src_remote; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf dest_local; //type: string
        ydk::YLeaf running_config; //type: empty
        ydk::YLeaf echo_commands; //type: empty
        ydk::YLeaf stop_at_first_failure; //type: empty
        ydk::YLeaf startup_config; //type: empty

}; // CopySrcRemote::Input

class CopySrcCore : public ydk::Entity
{
    public:
        CopySrcCore();
        ~CopySrcCore();

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

        class Input; //type: CopySrcCore::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::CopySrcCore::Input> input;
        
}; // CopySrcCore


class CopySrcCore::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf src_core; //type: string
        ydk::YLeaf dest_remote; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf dest_local_core; //type: string

}; // CopySrcCore::Input

class CopyRunningConfigSrc : public ydk::Entity
{
    public:
        CopyRunningConfigSrc();
        ~CopyRunningConfigSrc();

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

        class Input; //type: CopyRunningConfigSrc::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::CopyRunningConfigSrc::Input> input;
        
}; // CopyRunningConfigSrc


class CopyRunningConfigSrc::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf vdc_all; //type: empty
        ydk::YLeaf dest_remote; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf startup_config; //type: empty
        ydk::YLeaf fabric; //type: empty
        ydk::YLeaf dest_local_config; //type: empty

}; // CopyRunningConfigSrc::Input

class CopyStartupConfigSrc : public ydk::Entity
{
    public:
        CopyStartupConfigSrc();
        ~CopyStartupConfigSrc();

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

        class Input; //type: CopyStartupConfigSrc::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::CopyStartupConfigSrc::Input> input;
        
}; // CopyStartupConfigSrc


class CopyStartupConfigSrc::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf dest_remote; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf running_config; //type: empty
        ydk::YLeaf echo_commands; //type: empty
        ydk::YLeaf stop_at_first_failure; //type: empty
        ydk::YLeaf dest_local_config; //type: empty

}; // CopyStartupConfigSrc::Input

class CopyLicenses : public ydk::Entity
{
    public:
        CopyLicenses();
        ~CopyLicenses();

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

        class Input; //type: CopyLicenses::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::CopyLicenses::Input> input;
        
}; // CopyLicenses


class CopyLicenses::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf licenses; //type: string

}; // CopyLicenses::Input

class Delete : public ydk::Entity
{
    public:
        Delete();
        ~Delete();

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

        class Input; //type: Delete::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::Delete::Input> input;
        
}; // Delete


class Delete::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf target; //type: string

}; // Delete::Input

class DeleteCaCertificate : public ydk::Entity
{
    public:
        DeleteCaCertificate();
        ~DeleteCaCertificate();

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


}; // DeleteCaCertificate

class DeleteCrl : public ydk::Entity
{
    public:
        DeleteCrl();
        ~DeleteCrl();

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


}; // DeleteCrl

class BootNxos : public ydk::Entity
{
    public:
        BootNxos();
        ~BootNxos();

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

        class Input; //type: BootNxos::Input

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::BootNxos::Input> input;
        
}; // BootNxos


class BootNxos::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf image; //type: string

}; // BootNxos::Input

class Reload : public ydk::Entity
{
    public:
        Reload();
        ~Reload();

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


}; // Reload

class Dir : public ydk::Entity
{
    public:
        Dir();
        ~Dir();

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

        class Input; //type: Dir::Input
        class Output; //type: Dir::Output

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::Dir::Input> input;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::Dir::Output> output;
        
}; // Dir


class Dir::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf filemask; //type: string

}; // Dir::Input


class Dir::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf data; //type: string

}; // Dir::Output


}
}

#endif /* _CISCO_NX_OS_DEVICE_49_ */

