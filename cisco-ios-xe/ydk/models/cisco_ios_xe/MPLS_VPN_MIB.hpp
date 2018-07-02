#ifndef _MPLS_VPN_MIB_
#define _MPLS_VPN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_VPN_MIB {

class MPLSVPNMIB : public ydk::Entity
{
    public:
        MPLSVPNMIB();
        ~MPLSVPNMIB();

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

        class MplsVpnScalars; //type: MPLSVPNMIB::MplsVpnScalars
        class MplsVpnInterfaceConfTable; //type: MPLSVPNMIB::MplsVpnInterfaceConfTable
        class MplsVpnVrfTable; //type: MPLSVPNMIB::MplsVpnVrfTable
        class MplsVpnVrfRouteTargetTable; //type: MPLSVPNMIB::MplsVpnVrfRouteTargetTable
        class MplsVpnVrfBgpNbrAddrTable; //type: MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable
        class MplsVpnVrfBgpNbrPrefixTable; //type: MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable
        class MplsVpnVrfRouteTable; //type: MPLSVPNMIB::MplsVpnVrfRouteTable

        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnScalars> mplsvpnscalars;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnInterfaceConfTable> mplsvpninterfaceconftable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfTable> mplsvpnvrftable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfRouteTargetTable> mplsvpnvrfroutetargettable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable> mplsvpnvrfbgpnbraddrtable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable> mplsvpnvrfbgpnbrprefixtable;
        std::shared_ptr<cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfRouteTable> mplsvpnvrfroutetable;
        
}; // MPLSVPNMIB


class MPLSVPNMIB::MplsVpnScalars : public ydk::Entity
{
    public:
        MplsVpnScalars();
        ~MplsVpnScalars();

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

        ydk::YLeaf mplsvpnconfiguredvrfs; //type: uint32
        ydk::YLeaf mplsvpnactivevrfs; //type: uint32
        ydk::YLeaf mplsvpnconnectedinterfaces; //type: uint32
        ydk::YLeaf mplsvpnnotificationenable; //type: boolean
        ydk::YLeaf mplsvpnvrfconfmaxpossibleroutes; //type: uint32

}; // MPLSVPNMIB::MplsVpnScalars


class MPLSVPNMIB::MplsVpnInterfaceConfTable : public ydk::Entity
{
    public:
        MplsVpnInterfaceConfTable();
        ~MplsVpnInterfaceConfTable();

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

        class MplsVpnInterfaceConfEntry; //type: MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry

        ydk::YList mplsvpninterfaceconfentry;
        
}; // MPLSVPNMIB::MplsVpnInterfaceConfTable


class MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry : public ydk::Entity
{
    public:
        MplsVpnInterfaceConfEntry();
        ~MplsVpnInterfaceConfEntry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        ydk::YLeaf mplsvpninterfaceconfindex; //type: int32
        ydk::YLeaf mplsvpninterfacelabeledgetype; //type: MplsVpnInterfaceLabelEdgeType
        ydk::YLeaf mplsvpninterfacevpnclassification; //type: MplsVpnInterfaceVpnClassification
        ydk::YLeaf mplsvpninterfacevpnroutedistprotocol; //type: MplsVpnInterfaceVpnRouteDistProtocol
        ydk::YLeaf mplsvpninterfaceconfstoragetype; //type: StorageType
        ydk::YLeaf mplsvpninterfaceconfrowstatus; //type: RowStatus
        class MplsVpnInterfaceLabelEdgeType;
        class MplsVpnInterfaceVpnClassification;

}; // MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry


class MPLSVPNMIB::MplsVpnVrfTable : public ydk::Entity
{
    public:
        MplsVpnVrfTable();
        ~MplsVpnVrfTable();

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

        class MplsVpnVrfEntry; //type: MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry

        ydk::YList mplsvpnvrfentry;
        
}; // MPLSVPNMIB::MplsVpnVrfTable


class MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry : public ydk::Entity
{
    public:
        MplsVpnVrfEntry();
        ~MplsVpnVrfEntry();

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

        ydk::YLeaf mplsvpnvrfname; //type: binary
        ydk::YLeaf mplsvpnvrfdescription; //type: string
        ydk::YLeaf mplsvpnvrfroutedistinguisher; //type: binary
        ydk::YLeaf mplsvpnvrfcreationtime; //type: uint32
        ydk::YLeaf mplsvpnvrfoperstatus; //type: MplsVpnVrfOperStatus
        ydk::YLeaf mplsvpnvrfactiveinterfaces; //type: uint32
        ydk::YLeaf mplsvpnvrfassociatedinterfaces; //type: uint32
        ydk::YLeaf mplsvpnvrfconfmidroutethreshold; //type: uint32
        ydk::YLeaf mplsvpnvrfconfhighroutethreshold; //type: uint32
        ydk::YLeaf mplsvpnvrfconfmaxroutes; //type: uint32
        ydk::YLeaf mplsvpnvrfconflastchanged; //type: uint32
        ydk::YLeaf mplsvpnvrfconfrowstatus; //type: RowStatus
        ydk::YLeaf mplsvpnvrfconfstoragetype; //type: StorageType
        ydk::YLeaf mplsvpnvrfsecillegallabelviolations; //type: uint32
        ydk::YLeaf mplsvpnvrfsecillegallabelrcvthresh; //type: uint32
        ydk::YLeaf mplsvpnvrfperfroutesadded; //type: uint32
        ydk::YLeaf mplsvpnvrfperfroutesdeleted; //type: uint32
        ydk::YLeaf mplsvpnvrfperfcurrnumroutes; //type: uint32
        class MplsVpnVrfOperStatus;

}; // MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry


class MPLSVPNMIB::MplsVpnVrfRouteTargetTable : public ydk::Entity
{
    public:
        MplsVpnVrfRouteTargetTable();
        ~MplsVpnVrfRouteTargetTable();

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

        class MplsVpnVrfRouteTargetEntry; //type: MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry

        ydk::YList mplsvpnvrfroutetargetentry;
        
}; // MPLSVPNMIB::MplsVpnVrfRouteTargetTable


class MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry : public ydk::Entity
{
    public:
        MplsVpnVrfRouteTargetEntry();
        ~MplsVpnVrfRouteTargetEntry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        ydk::YLeaf mplsvpnvrfroutetargetindex; //type: uint32
        ydk::YLeaf mplsvpnvrfroutetargettype; //type: MplsVpnVrfRouteTargetType
        ydk::YLeaf mplsvpnvrfroutetarget; //type: binary
        ydk::YLeaf mplsvpnvrfroutetargetdescr; //type: string
        ydk::YLeaf mplsvpnvrfroutetargetrowstatus; //type: RowStatus
        class MplsVpnVrfRouteTargetType;

}; // MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry


class MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable : public ydk::Entity
{
    public:
        MplsVpnVrfBgpNbrAddrTable();
        ~MplsVpnVrfBgpNbrAddrTable();

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

        class MplsVpnVrfBgpNbrAddrEntry; //type: MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry

        ydk::YList mplsvpnvrfbgpnbraddrentry;
        
}; // MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable


class MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry : public ydk::Entity
{
    public:
        MplsVpnVrfBgpNbrAddrEntry();
        ~MplsVpnVrfBgpNbrAddrEntry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        //type: int32 (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::mplsvpninterfaceconfindex)
        ydk::YLeaf mplsvpninterfaceconfindex;
        ydk::YLeaf mplsvpnvrfbgpnbrindex; //type: uint32
        ydk::YLeaf mplsvpnvrfbgpnbrrole; //type: MplsVpnVrfBgpNbrRole
        ydk::YLeaf mplsvpnvrfbgpnbrtype; //type: InetAddressType
        ydk::YLeaf mplsvpnvrfbgpnbraddr; //type: binary
        ydk::YLeaf mplsvpnvrfbgpnbrrowstatus; //type: RowStatus
        ydk::YLeaf mplsvpnvrfbgpnbrstoragetype; //type: StorageType
        class MplsVpnVrfBgpNbrRole;

}; // MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry


class MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable : public ydk::Entity
{
    public:
        MplsVpnVrfBgpNbrPrefixTable();
        ~MplsVpnVrfBgpNbrPrefixTable();

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

        class MplsVpnVrfBgpNbrPrefixEntry; //type: MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry

        ydk::YList mplsvpnvrfbgpnbrprefixentry;
        
}; // MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable


class MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry : public ydk::Entity
{
    public:
        MplsVpnVrfBgpNbrPrefixEntry();
        ~MplsVpnVrfBgpNbrPrefixEntry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        ydk::YLeaf mplsvpnvrfbgppathattripaddrprefix; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattripaddrprefixlen; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattrpeer; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattrorigin; //type: MplsVpnVrfBgpPathAttrOrigin
        ydk::YLeaf mplsvpnvrfbgppathattraspathsegment; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattrnexthop; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattrmultiexitdisc; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattrlocalpref; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattratomicaggregate; //type: MplsVpnVrfBgpPathAttrAtomicAggregate
        ydk::YLeaf mplsvpnvrfbgppathattraggregatoras; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattraggregatoraddr; //type: binary
        ydk::YLeaf mplsvpnvrfbgppathattrcalclocalpref; //type: int32
        ydk::YLeaf mplsvpnvrfbgppathattrbest; //type: MplsVpnVrfBgpPathAttrBest
        ydk::YLeaf mplsvpnvrfbgppathattrunknown; //type: binary
        class MplsVpnVrfBgpPathAttrOrigin;
        class MplsVpnVrfBgpPathAttrAtomicAggregate;
        class MplsVpnVrfBgpPathAttrBest;

}; // MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry


class MPLSVPNMIB::MplsVpnVrfRouteTable : public ydk::Entity
{
    public:
        MplsVpnVrfRouteTable();
        ~MplsVpnVrfRouteTable();

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

        class MplsVpnVrfRouteEntry; //type: MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry

        ydk::YList mplsvpnvrfrouteentry;
        
}; // MPLSVPNMIB::MplsVpnVrfRouteTable


class MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry : public ydk::Entity
{
    public:
        MplsVpnVrfRouteEntry();
        ~MplsVpnVrfRouteEntry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_VPN_MIB::MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::mplsvpnvrfname)
        ydk::YLeaf mplsvpnvrfname;
        ydk::YLeaf mplsvpnvrfroutedest; //type: binary
        ydk::YLeaf mplsvpnvrfroutemask; //type: binary
        ydk::YLeaf mplsvpnvrfroutetos; //type: uint32
        ydk::YLeaf mplsvpnvrfroutenexthop; //type: binary
        ydk::YLeaf mplsvpnvrfroutedestaddrtype; //type: InetAddressType
        ydk::YLeaf mplsvpnvrfroutemaskaddrtype; //type: InetAddressType
        ydk::YLeaf mplsvpnvrfroutenexthopaddrtype; //type: InetAddressType
        ydk::YLeaf mplsvpnvrfrouteifindex; //type: int32
        ydk::YLeaf mplsvpnvrfroutetype; //type: MplsVpnVrfRouteType
        ydk::YLeaf mplsvpnvrfrouteproto; //type: MplsVpnVrfRouteProto
        ydk::YLeaf mplsvpnvrfrouteage; //type: uint32
        ydk::YLeaf mplsvpnvrfrouteinfo; //type: string
        ydk::YLeaf mplsvpnvrfroutenexthopas; //type: uint32
        ydk::YLeaf mplsvpnvrfroutemetric1; //type: int32
        ydk::YLeaf mplsvpnvrfroutemetric2; //type: int32
        ydk::YLeaf mplsvpnvrfroutemetric3; //type: int32
        ydk::YLeaf mplsvpnvrfroutemetric4; //type: int32
        ydk::YLeaf mplsvpnvrfroutemetric5; //type: int32
        ydk::YLeaf mplsvpnvrfrouterowstatus; //type: RowStatus
        ydk::YLeaf mplsvpnvrfroutestoragetype; //type: StorageType
        class MplsVpnVrfRouteType;
        class MplsVpnVrfRouteProto;

}; // MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry

class MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::MplsVpnInterfaceLabelEdgeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf providerEdge;
        static const ydk::Enum::YLeaf customerEdge;

};

class MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::MplsVpnInterfaceVpnClassification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf carrierOfCarrier;
        static const ydk::Enum::YLeaf enterprise;
        static const ydk::Enum::YLeaf interProvider;

};

class MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::MplsVpnVrfOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::MplsVpnVrfRouteTargetType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;
        static const ydk::Enum::YLeaf both;

};

class MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::MplsVpnVrfBgpNbrRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ce;
        static const ydk::Enum::YLeaf pe;

};

class MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

};

class MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrAtomicAggregate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lessSpecificRrouteNotSelected;
        static const ydk::Enum::YLeaf lessSpecificRouteSelected;

};

class MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrBest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf reject;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf netmgmt;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf ggp;
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf isIs;
        static const ydk::Enum::YLeaf esIs;
        static const ydk::Enum::YLeaf ciscoIgrp;
        static const ydk::Enum::YLeaf bbnSpfIgp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf idpr;
        static const ydk::Enum::YLeaf ciscoEigrp;

};


}
}

#endif /* _MPLS_VPN_MIB_ */

