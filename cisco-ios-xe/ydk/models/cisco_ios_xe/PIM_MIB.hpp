#ifndef _PIM_MIB_
#define _PIM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace PIM_MIB {

class PIMMIB : public ydk::Entity
{
    public:
        PIMMIB();
        ~PIMMIB();

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

        class Pim; //type: PIMMIB::Pim
        class PimInterfaceTable; //type: PIMMIB::PimInterfaceTable
        class PimNeighborTable; //type: PIMMIB::PimNeighborTable
        class PimIpMRouteTable; //type: PIMMIB::PimIpMRouteTable
        class PimRPTable; //type: PIMMIB::PimRPTable
        class PimRPSetTable; //type: PIMMIB::PimRPSetTable
        class PimIpMRouteNextHopTable; //type: PIMMIB::PimIpMRouteNextHopTable
        class PimCandidateRPTable; //type: PIMMIB::PimCandidateRPTable
        class PimComponentTable; //type: PIMMIB::PimComponentTable

        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pim> pim;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::PimInterfaceTable> piminterfacetable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::PimNeighborTable> pimneighbortable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::PimIpMRouteTable> pimipmroutetable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::PimRPTable> pimrptable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::PimRPSetTable> pimrpsettable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::PimIpMRouteNextHopTable> pimipmroutenexthoptable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::PimCandidateRPTable> pimcandidaterptable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::PimComponentTable> pimcomponenttable;
        
}; // PIMMIB


class PIMMIB::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

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

        ydk::YLeaf pimjoinpruneinterval; //type: int32

}; // PIMMIB::Pim


class PIMMIB::PimInterfaceTable : public ydk::Entity
{
    public:
        PimInterfaceTable();
        ~PimInterfaceTable();

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

        class PimInterfaceEntry; //type: PIMMIB::PimInterfaceTable::PimInterfaceEntry

        ydk::YList piminterfaceentry;
        
}; // PIMMIB::PimInterfaceTable


class PIMMIB::PimInterfaceTable::PimInterfaceEntry : public ydk::Entity
{
    public:
        PimInterfaceEntry();
        ~PimInterfaceEntry();

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

        ydk::YLeaf piminterfaceifindex; //type: int32
        ydk::YLeaf piminterfaceaddress; //type: string
        ydk::YLeaf piminterfacenetmask; //type: string
        ydk::YLeaf piminterfacemode; //type: PimInterfaceMode
        ydk::YLeaf piminterfacedr; //type: string
        ydk::YLeaf piminterfacehellointerval; //type: int32
        ydk::YLeaf piminterfacestatus; //type: RowStatus
        ydk::YLeaf piminterfacejoinpruneinterval; //type: int32
        ydk::YLeaf piminterfacecbsrpreference; //type: int32
        class PimInterfaceMode;

}; // PIMMIB::PimInterfaceTable::PimInterfaceEntry


class PIMMIB::PimNeighborTable : public ydk::Entity
{
    public:
        PimNeighborTable();
        ~PimNeighborTable();

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

        class PimNeighborEntry; //type: PIMMIB::PimNeighborTable::PimNeighborEntry

        ydk::YList pimneighborentry;
        
}; // PIMMIB::PimNeighborTable


class PIMMIB::PimNeighborTable::PimNeighborEntry : public ydk::Entity
{
    public:
        PimNeighborEntry();
        ~PimNeighborEntry();

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

        ydk::YLeaf pimneighboraddress; //type: string
        ydk::YLeaf pimneighborifindex; //type: int32
        ydk::YLeaf pimneighboruptime; //type: uint32
        ydk::YLeaf pimneighborexpirytime; //type: uint32
        ydk::YLeaf pimneighbormode; //type: PimNeighborMode
        class PimNeighborMode;

}; // PIMMIB::PimNeighborTable::PimNeighborEntry


class PIMMIB::PimIpMRouteTable : public ydk::Entity
{
    public:
        PimIpMRouteTable();
        ~PimIpMRouteTable();

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

        class PimIpMRouteEntry; //type: PIMMIB::PimIpMRouteTable::PimIpMRouteEntry

        ydk::YList pimipmrouteentry;
        
}; // PIMMIB::PimIpMRouteTable


class PIMMIB::PimIpMRouteTable::PimIpMRouteEntry : public ydk::Entity
{
    public:
        PimIpMRouteEntry();
        ~PimIpMRouteEntry();

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

        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::ipmroutegroup)
        ydk::YLeaf ipmroutegroup;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::ipmroutesource)
        ydk::YLeaf ipmroutesource;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteTable::IpMRouteEntry::ipmroutesourcemask)
        ydk::YLeaf ipmroutesourcemask;
        ydk::YLeaf pimipmrouteupstreamasserttimer; //type: uint32
        ydk::YLeaf pimipmrouteassertmetric; //type: int32
        ydk::YLeaf pimipmrouteassertmetricpref; //type: int32
        ydk::YLeaf pimipmrouteassertrptbit; //type: boolean
        ydk::YLeaf pimipmrouteflags; //type: binary

}; // PIMMIB::PimIpMRouteTable::PimIpMRouteEntry


class PIMMIB::PimRPTable : public ydk::Entity
{
    public:
        PimRPTable();
        ~PimRPTable();

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

        class PimRPEntry; //type: PIMMIB::PimRPTable::PimRPEntry

        ydk::YList pimrpentry;
        
}; // PIMMIB::PimRPTable


class PIMMIB::PimRPTable::PimRPEntry : public ydk::Entity
{
    public:
        PimRPEntry();
        ~PimRPEntry();

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

        ydk::YLeaf pimrpgroupaddress; //type: string
        ydk::YLeaf pimrpaddress; //type: string
        ydk::YLeaf pimrpstate; //type: PimRPState
        ydk::YLeaf pimrpstatetimer; //type: uint32
        ydk::YLeaf pimrplastchange; //type: uint32
        ydk::YLeaf pimrprowstatus; //type: RowStatus
        class PimRPState;

}; // PIMMIB::PimRPTable::PimRPEntry


class PIMMIB::PimRPSetTable : public ydk::Entity
{
    public:
        PimRPSetTable();
        ~PimRPSetTable();

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

        class PimRPSetEntry; //type: PIMMIB::PimRPSetTable::PimRPSetEntry

        ydk::YList pimrpsetentry;
        
}; // PIMMIB::PimRPSetTable


class PIMMIB::PimRPSetTable::PimRPSetEntry : public ydk::Entity
{
    public:
        PimRPSetEntry();
        ~PimRPSetEntry();

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

        ydk::YLeaf pimrpsetcomponent; //type: int32
        ydk::YLeaf pimrpsetgroupaddress; //type: string
        ydk::YLeaf pimrpsetgroupmask; //type: string
        ydk::YLeaf pimrpsetaddress; //type: string
        ydk::YLeaf pimrpsetholdtime; //type: int32
        ydk::YLeaf pimrpsetexpirytime; //type: uint32

}; // PIMMIB::PimRPSetTable::PimRPSetEntry


class PIMMIB::PimIpMRouteNextHopTable : public ydk::Entity
{
    public:
        PimIpMRouteNextHopTable();
        ~PimIpMRouteNextHopTable();

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

        class PimIpMRouteNextHopEntry; //type: PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry

        ydk::YList pimipmroutenexthopentry;
        
}; // PIMMIB::PimIpMRouteNextHopTable


class PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry : public ydk::Entity
{
    public:
        PimIpMRouteNextHopEntry();
        ~PimIpMRouteNextHopEntry();

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

        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::ipmroutenexthopgroup)
        ydk::YLeaf ipmroutenexthopgroup;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::ipmroutenexthopsource)
        ydk::YLeaf ipmroutenexthopsource;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::ipmroutenexthopsourcemask)
        ydk::YLeaf ipmroutenexthopsourcemask;
        //type: int32 (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::ipmroutenexthopifindex)
        ydk::YLeaf ipmroutenexthopifindex;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::IpMRouteNextHopTable::IpMRouteNextHopEntry::ipmroutenexthopaddress)
        ydk::YLeaf ipmroutenexthopaddress;
        ydk::YLeaf pimipmroutenexthopprunereason; //type: PimIpMRouteNextHopPruneReason
        class PimIpMRouteNextHopPruneReason;

}; // PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry


class PIMMIB::PimCandidateRPTable : public ydk::Entity
{
    public:
        PimCandidateRPTable();
        ~PimCandidateRPTable();

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

        class PimCandidateRPEntry; //type: PIMMIB::PimCandidateRPTable::PimCandidateRPEntry

        ydk::YList pimcandidaterpentry;
        
}; // PIMMIB::PimCandidateRPTable


class PIMMIB::PimCandidateRPTable::PimCandidateRPEntry : public ydk::Entity
{
    public:
        PimCandidateRPEntry();
        ~PimCandidateRPEntry();

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

        ydk::YLeaf pimcandidaterpgroupaddress; //type: string
        ydk::YLeaf pimcandidaterpgroupmask; //type: string
        ydk::YLeaf pimcandidaterpaddress; //type: string
        ydk::YLeaf pimcandidaterprowstatus; //type: RowStatus

}; // PIMMIB::PimCandidateRPTable::PimCandidateRPEntry


class PIMMIB::PimComponentTable : public ydk::Entity
{
    public:
        PimComponentTable();
        ~PimComponentTable();

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

        class PimComponentEntry; //type: PIMMIB::PimComponentTable::PimComponentEntry

        ydk::YList pimcomponententry;
        
}; // PIMMIB::PimComponentTable


class PIMMIB::PimComponentTable::PimComponentEntry : public ydk::Entity
{
    public:
        PimComponentEntry();
        ~PimComponentEntry();

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

        ydk::YLeaf pimcomponentindex; //type: int32
        ydk::YLeaf pimcomponentbsraddress; //type: string
        ydk::YLeaf pimcomponentbsrexpirytime; //type: uint32
        ydk::YLeaf pimcomponentcrpholdtime; //type: int32
        ydk::YLeaf pimcomponentstatus; //type: RowStatus

}; // PIMMIB::PimComponentTable::PimComponentEntry

class PIMMIB::PimInterfaceTable::PimInterfaceEntry::PimInterfaceMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dense;
        static const ydk::Enum::YLeaf sparse;
        static const ydk::Enum::YLeaf sparseDense;

};

class PIMMIB::PimNeighborTable::PimNeighborEntry::PimNeighborMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dense;
        static const ydk::Enum::YLeaf sparse;

};

class PIMMIB::PimRPTable::PimRPEntry::PimRPState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::PimIpMRouteNextHopPruneReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf prune;
        static const ydk::Enum::YLeaf assert;

};


}
}

#endif /* _PIM_MIB_ */

