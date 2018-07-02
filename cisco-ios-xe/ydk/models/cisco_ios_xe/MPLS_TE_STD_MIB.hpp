#ifndef _MPLS_TE_STD_MIB_
#define _MPLS_TE_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_TE_STD_MIB {

class MPLSTESTDMIB : public ydk::Entity
{
    public:
        MPLSTESTDMIB();
        ~MPLSTESTDMIB();

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

        class MplsTeScalars; //type: MPLSTESTDMIB::MplsTeScalars
        class MplsTeObjects; //type: MPLSTESTDMIB::MplsTeObjects
        class MplsTunnelTable; //type: MPLSTESTDMIB::MplsTunnelTable
        class MplsTunnelHopTable; //type: MPLSTESTDMIB::MplsTunnelHopTable
        class MplsTunnelResourceTable; //type: MPLSTESTDMIB::MplsTunnelResourceTable
        class MplsTunnelARHopTable; //type: MPLSTESTDMIB::MplsTunnelARHopTable
        class MplsTunnelCHopTable; //type: MPLSTESTDMIB::MplsTunnelCHopTable
        class MplsTunnelCRLDPResTable; //type: MPLSTESTDMIB::MplsTunnelCRLDPResTable

        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTeScalars> mplstescalars;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTeObjects> mplsteobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelTable> mplstunneltable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelHopTable> mplstunnelhoptable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelResourceTable> mplstunnelresourcetable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelARHopTable> mplstunnelarhoptable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelCHopTable> mplstunnelchoptable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelCRLDPResTable> mplstunnelcrldprestable;
        
}; // MPLSTESTDMIB


class MPLSTESTDMIB::MplsTeScalars : public ydk::Entity
{
    public:
        MplsTeScalars();
        ~MplsTeScalars();

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

        ydk::YLeaf mplstunnelconfigured; //type: uint32
        ydk::YLeaf mplstunnelactive; //type: uint32
        ydk::YLeaf mplstunneltedistproto; //type: MplsTunnelTEDistProto
        ydk::YLeaf mplstunnelmaxhops; //type: uint32
        ydk::YLeaf mplstunnelnotificationmaxrate; //type: uint32

}; // MPLSTESTDMIB::MplsTeScalars


class MPLSTESTDMIB::MplsTeObjects : public ydk::Entity
{
    public:
        MplsTeObjects();
        ~MplsTeObjects();

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

        ydk::YLeaf mplstunnelindexnext; //type: uint32
        ydk::YLeaf mplstunnelhoplistindexnext; //type: uint32
        ydk::YLeaf mplstunnelresourceindexnext; //type: uint32
        ydk::YLeaf mplstunnelnotificationenable; //type: boolean

}; // MPLSTESTDMIB::MplsTeObjects


class MPLSTESTDMIB::MplsTunnelTable : public ydk::Entity
{
    public:
        MplsTunnelTable();
        ~MplsTunnelTable();

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

        class MplsTunnelEntry; //type: MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry

        ydk::YList mplstunnelentry;
        
}; // MPLSTESTDMIB::MplsTunnelTable


class MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry : public ydk::Entity
{
    public:
        MplsTunnelEntry();
        ~MplsTunnelEntry();

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

        ydk::YLeaf mplstunnelindex; //type: uint32
        ydk::YLeaf mplstunnelinstance; //type: uint32
        ydk::YLeaf mplstunnelingresslsrid; //type: uint32
        ydk::YLeaf mplstunnelegresslsrid; //type: uint32
        ydk::YLeaf mplstunnelname; //type: string
        ydk::YLeaf mplstunneldescr; //type: string
        ydk::YLeaf mplstunnelisif; //type: boolean
        ydk::YLeaf mplstunnelifindex; //type: int32
        ydk::YLeaf mplstunnelowner; //type: MplsOwner
        ydk::YLeaf mplstunnelrole; //type: MplsTunnelRole
        ydk::YLeaf mplstunnelxcpointer; //type: string
        ydk::YLeaf mplstunnelsignallingproto; //type: MplsTunnelSignallingProto
        ydk::YLeaf mplstunnelsetupprio; //type: int32
        ydk::YLeaf mplstunnelholdingprio; //type: int32
        ydk::YLeaf mplstunnelsessionattributes; //type: MplsTunnelSessionAttributes
        ydk::YLeaf mplstunnellocalprotectinuse; //type: boolean
        ydk::YLeaf mplstunnelresourcepointer; //type: string
        ydk::YLeaf mplstunnelprimaryinstance; //type: uint32
        ydk::YLeaf mplstunnelinstancepriority; //type: uint32
        ydk::YLeaf mplstunnelhoptableindex; //type: uint32
        ydk::YLeaf mplstunnelpathinuse; //type: uint32
        ydk::YLeaf mplstunnelarhoptableindex; //type: uint32
        ydk::YLeaf mplstunnelchoptableindex; //type: uint32
        ydk::YLeaf mplstunnelincludeanyaffinity; //type: uint32
        ydk::YLeaf mplstunnelincludeallaffinity; //type: uint32
        ydk::YLeaf mplstunnelexcludeanyaffinity; //type: uint32
        ydk::YLeaf mplstunneltotaluptime; //type: uint32
        ydk::YLeaf mplstunnelinstanceuptime; //type: uint32
        ydk::YLeaf mplstunnelprimaryuptime; //type: uint32
        ydk::YLeaf mplstunnelpathchanges; //type: uint32
        ydk::YLeaf mplstunnellastpathchange; //type: uint32
        ydk::YLeaf mplstunnelcreationtime; //type: uint32
        ydk::YLeaf mplstunnelstatetransitions; //type: uint32
        ydk::YLeaf mplstunneladminstatus; //type: MplsTunnelAdminStatus
        ydk::YLeaf mplstunneloperstatus; //type: MplsTunnelOperStatus
        ydk::YLeaf mplstunnelrowstatus; //type: RowStatus
        ydk::YLeaf mplstunnelstoragetype; //type: StorageType
        ydk::YLeaf mplstunnelperfpackets; //type: uint32
        ydk::YLeaf mplstunnelperfhcpackets; //type: uint64
        ydk::YLeaf mplstunnelperferrors; //type: uint32
        ydk::YLeaf mplstunnelperfbytes; //type: uint32
        ydk::YLeaf mplstunnelperfhcbytes; //type: uint64
        class MplsTunnelRole;
        class MplsTunnelSignallingProto;
        class MplsTunnelAdminStatus;
        class MplsTunnelOperStatus;

}; // MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry


class MPLSTESTDMIB::MplsTunnelHopTable : public ydk::Entity
{
    public:
        MplsTunnelHopTable();
        ~MplsTunnelHopTable();

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

        class MplsTunnelHopEntry; //type: MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry

        ydk::YList mplstunnelhopentry;
        
}; // MPLSTESTDMIB::MplsTunnelHopTable


class MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry : public ydk::Entity
{
    public:
        MplsTunnelHopEntry();
        ~MplsTunnelHopEntry();

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

        ydk::YLeaf mplstunnelhoplistindex; //type: uint32
        ydk::YLeaf mplstunnelhoppathoptionindex; //type: uint32
        ydk::YLeaf mplstunnelhopindex; //type: uint32
        ydk::YLeaf mplstunnelhopaddrtype; //type: TeHopAddressType
        ydk::YLeaf mplstunnelhopipaddr; //type: binary
        ydk::YLeaf mplstunnelhopipprefixlen; //type: uint32
        ydk::YLeaf mplstunnelhopasnumber; //type: binary
        ydk::YLeaf mplstunnelhopaddrunnum; //type: binary
        ydk::YLeaf mplstunnelhoplspid; //type: binary
        ydk::YLeaf mplstunnelhoptype; //type: MplsTunnelHopType
        ydk::YLeaf mplstunnelhopinclude; //type: boolean
        ydk::YLeaf mplstunnelhoppathoptionname; //type: string
        ydk::YLeaf mplstunnelhopentrypathcomp; //type: MplsTunnelHopEntryPathComp
        ydk::YLeaf mplstunnelhoprowstatus; //type: RowStatus
        ydk::YLeaf mplstunnelhopstoragetype; //type: StorageType
        class MplsTunnelHopType;
        class MplsTunnelHopEntryPathComp;

}; // MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry


class MPLSTESTDMIB::MplsTunnelResourceTable : public ydk::Entity
{
    public:
        MplsTunnelResourceTable();
        ~MplsTunnelResourceTable();

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

        class MplsTunnelResourceEntry; //type: MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry

        ydk::YList mplstunnelresourceentry;
        
}; // MPLSTESTDMIB::MplsTunnelResourceTable


class MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry : public ydk::Entity
{
    public:
        MplsTunnelResourceEntry();
        ~MplsTunnelResourceEntry();

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

        ydk::YLeaf mplstunnelresourceindex; //type: uint32
        ydk::YLeaf mplstunnelresourcemaxrate; //type: uint32
        ydk::YLeaf mplstunnelresourcemeanrate; //type: uint32
        ydk::YLeaf mplstunnelresourcemaxburstsize; //type: uint32
        ydk::YLeaf mplstunnelresourcemeanburstsize; //type: uint32
        ydk::YLeaf mplstunnelresourceexburstsize; //type: uint32
        ydk::YLeaf mplstunnelresourcefrequency; //type: MplsTunnelResourceFrequency
        ydk::YLeaf mplstunnelresourceweight; //type: uint32
        ydk::YLeaf mplstunnelresourcerowstatus; //type: RowStatus
        ydk::YLeaf mplstunnelresourcestoragetype; //type: StorageType
        class MplsTunnelResourceFrequency;

}; // MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry


class MPLSTESTDMIB::MplsTunnelARHopTable : public ydk::Entity
{
    public:
        MplsTunnelARHopTable();
        ~MplsTunnelARHopTable();

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

        class MplsTunnelARHopEntry; //type: MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry

        ydk::YList mplstunnelarhopentry;
        
}; // MPLSTESTDMIB::MplsTunnelARHopTable


class MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry : public ydk::Entity
{
    public:
        MplsTunnelARHopEntry();
        ~MplsTunnelARHopEntry();

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

        ydk::YLeaf mplstunnelarhoplistindex; //type: uint32
        ydk::YLeaf mplstunnelarhopindex; //type: uint32
        ydk::YLeaf mplstunnelarhopaddrtype; //type: TeHopAddressType
        ydk::YLeaf mplstunnelarhopipaddr; //type: binary
        ydk::YLeaf mplstunnelarhopaddrunnum; //type: binary
        ydk::YLeaf mplstunnelarhoplspid; //type: binary

}; // MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry


class MPLSTESTDMIB::MplsTunnelCHopTable : public ydk::Entity
{
    public:
        MplsTunnelCHopTable();
        ~MplsTunnelCHopTable();

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

        class MplsTunnelCHopEntry; //type: MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry

        ydk::YList mplstunnelchopentry;
        
}; // MPLSTESTDMIB::MplsTunnelCHopTable


class MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry : public ydk::Entity
{
    public:
        MplsTunnelCHopEntry();
        ~MplsTunnelCHopEntry();

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

        ydk::YLeaf mplstunnelchoplistindex; //type: uint32
        ydk::YLeaf mplstunnelchopindex; //type: uint32
        ydk::YLeaf mplstunnelchopaddrtype; //type: TeHopAddressType
        ydk::YLeaf mplstunnelchopipaddr; //type: binary
        ydk::YLeaf mplstunnelchopipprefixlen; //type: uint32
        ydk::YLeaf mplstunnelchopasnumber; //type: binary
        ydk::YLeaf mplstunnelchopaddrunnum; //type: binary
        ydk::YLeaf mplstunnelchoplspid; //type: binary
        ydk::YLeaf mplstunnelchoptype; //type: MplsTunnelCHopType
        class MplsTunnelCHopType;

}; // MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry


class MPLSTESTDMIB::MplsTunnelCRLDPResTable : public ydk::Entity
{
    public:
        MplsTunnelCRLDPResTable();
        ~MplsTunnelCRLDPResTable();

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

        class MplsTunnelCRLDPResEntry; //type: MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry

        ydk::YList mplstunnelcrldpresentry;
        
}; // MPLSTESTDMIB::MplsTunnelCRLDPResTable


class MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry : public ydk::Entity
{
    public:
        MplsTunnelCRLDPResEntry();
        ~MplsTunnelCRLDPResEntry();

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

        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::mplstunnelresourceindex)
        ydk::YLeaf mplstunnelresourceindex;
        ydk::YLeaf mplstunnelcrldpresmeanburstsize; //type: uint32
        ydk::YLeaf mplstunnelcrldpresexburstsize; //type: uint32
        ydk::YLeaf mplstunnelcrldpresfrequency; //type: MplsTunnelCRLDPResFrequency
        ydk::YLeaf mplstunnelcrldpresweight; //type: uint32
        ydk::YLeaf mplstunnelcrldpresflags; //type: uint32
        ydk::YLeaf mplstunnelcrldpresrowstatus; //type: RowStatus
        ydk::YLeaf mplstunnelcrldpresstoragetype; //type: StorageType
        class MplsTunnelCRLDPResFrequency;

}; // MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry

class MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf head;
        static const ydk::Enum::YLeaf transit;
        static const ydk::Enum::YLeaf tail;
        static const ydk::Enum::YLeaf headTail;

};

class MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelSignallingProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp;
        static const ydk::Enum::YLeaf crldp;
        static const ydk::Enum::YLeaf other;

};

class MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dormant;
        static const ydk::Enum::YLeaf notPresent;
        static const ydk::Enum::YLeaf lowerLayerDown;

};

class MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::MplsTunnelHopType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::MplsTunnelHopEntryPathComp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_;

};

class MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::MplsTunnelResourceFrequency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf frequent;
        static const ydk::Enum::YLeaf veryFrequent;

};

class MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::MplsTunnelCHopType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::MplsTunnelCRLDPResFrequency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf frequent;
        static const ydk::Enum::YLeaf veryFrequent;

};


}
}

#endif /* _MPLS_TE_STD_MIB_ */

