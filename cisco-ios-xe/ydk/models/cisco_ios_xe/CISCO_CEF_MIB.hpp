#ifndef _CISCO_CEF_MIB_
#define _CISCO_CEF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CEF_MIB {

class CISCOCEFMIB : public ydk::Entity
{
    public:
        CISCOCEFMIB();
        ~CISCOCEFMIB();

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

        class Ceffib; //type: CISCOCEFMIB::Ceffib
        class Cefcc; //type: CISCOCEFMIB::Cefcc
        class Cefnotifcntl; //type: CISCOCEFMIB::Cefnotifcntl
        class Ceffibsummarytable; //type: CISCOCEFMIB::Ceffibsummarytable
        class Cefprefixtable; //type: CISCOCEFMIB::Cefprefixtable
        class Ceflmprefixtable; //type: CISCOCEFMIB::Ceflmprefixtable
        class Cefpathtable; //type: CISCOCEFMIB::Cefpathtable
        class Cefadjsummarytable; //type: CISCOCEFMIB::Cefadjsummarytable
        class Cefadjtable; //type: CISCOCEFMIB::Cefadjtable
        class Ceffeselectiontable; //type: CISCOCEFMIB::Ceffeselectiontable
        class Cefcfgtable; //type: CISCOCEFMIB::Cefcfgtable
        class Cefresourcetable; //type: CISCOCEFMIB::Cefresourcetable
        class Cefinttable; //type: CISCOCEFMIB::Cefinttable
        class Cefpeertable; //type: CISCOCEFMIB::Cefpeertable
        class Cefpeerfibtable; //type: CISCOCEFMIB::Cefpeerfibtable
        class Cefccglobaltable; //type: CISCOCEFMIB::Cefccglobaltable
        class Cefcctypetable; //type: CISCOCEFMIB::Cefcctypetable
        class Cefinconsistencyrecordtable; //type: CISCOCEFMIB::Cefinconsistencyrecordtable
        class Cefstatsprefixlentable; //type: CISCOCEFMIB::Cefstatsprefixlentable
        class Cefswitchingstatstable; //type: CISCOCEFMIB::Cefswitchingstatstable

        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefadjsummarytable> cefadjsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefadjtable> cefadjtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefcc> cefcc;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefccglobaltable> cefccglobaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefcctypetable> cefcctypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefcfgtable> cefcfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Ceffeselectiontable> ceffeselectiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Ceffib> ceffib;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Ceffibsummarytable> ceffibsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefinconsistencyrecordtable> cefinconsistencyrecordtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefinttable> cefinttable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Ceflmprefixtable> ceflmprefixtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefnotifcntl> cefnotifcntl;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefpathtable> cefpathtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefpeerfibtable> cefpeerfibtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefpeertable> cefpeertable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefprefixtable> cefprefixtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefresourcetable> cefresourcetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefstatsprefixlentable> cefstatsprefixlentable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefswitchingstatstable> cefswitchingstatstable;
        
}; // CISCOCEFMIB


class CISCOCEFMIB::Cefadjsummarytable : public ydk::Entity
{
    public:
        Cefadjsummarytable();
        ~Cefadjsummarytable();

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

        class Cefadjsummaryentry; //type: CISCOCEFMIB::Cefadjsummarytable::Cefadjsummaryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefadjsummarytable::Cefadjsummaryentry> > cefadjsummaryentry;
        
}; // CISCOCEFMIB::Cefadjsummarytable


class CISCOCEFMIB::Cefadjsummarytable::Cefadjsummaryentry : public ydk::Entity
{
    public:
        Cefadjsummaryentry();
        ~Cefadjsummaryentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefadjsummarylinktype; //type: CefAdjLinkType
        ydk::YLeaf cefadjsummarycomplete; //type: uint32
        ydk::YLeaf cefadjsummaryincomplete; //type: uint32
        ydk::YLeaf cefadjsummaryfixup; //type: uint32
        ydk::YLeaf cefadjsummaryredirect; //type: uint32

}; // CISCOCEFMIB::Cefadjsummarytable::Cefadjsummaryentry


class CISCOCEFMIB::Cefadjtable : public ydk::Entity
{
    public:
        Cefadjtable();
        ~Cefadjtable();

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

        class Cefadjentry; //type: CISCOCEFMIB::Cefadjtable::Cefadjentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefadjtable::Cefadjentry> > cefadjentry;
        
}; // CISCOCEFMIB::Cefadjtable


class CISCOCEFMIB::Cefadjtable::Cefadjentry : public ydk::Entity
{
    public:
        Cefadjentry();
        ~Cefadjentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cefadjnexthopaddrtype; //type: InetAddressType
        ydk::YLeaf cefadjnexthopaddr; //type: binary
        ydk::YLeaf cefadjconnid; //type: uint32
        ydk::YLeaf cefadjsummarylinktype; //type: CefAdjLinkType
        ydk::YLeaf cefadjsource; //type: CefAdjacencySource
        ydk::YLeaf cefadjencap; //type: string
        ydk::YLeaf cefadjfixup; //type: string
        ydk::YLeaf cefadjmtu; //type: uint32
        ydk::YLeaf cefadjforwardinginfo; //type: string
        ydk::YLeaf cefadjpkts; //type: uint32
        ydk::YLeaf cefadjhcpkts; //type: uint64
        ydk::YLeaf cefadjbytes; //type: uint32
        ydk::YLeaf cefadjhcbytes; //type: uint64

}; // CISCOCEFMIB::Cefadjtable::Cefadjentry


class CISCOCEFMIB::Cefcc : public ydk::Entity
{
    public:
        Cefcc();
        ~Cefcc();

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

        ydk::YLeaf entlastinconsistencydetecttime; //type: uint32
        ydk::YLeaf cefinconsistencyreset; //type: CefCCAction
        ydk::YLeaf cefinconsistencyresetstatus; //type: CefCCStatus

}; // CISCOCEFMIB::Cefcc


class CISCOCEFMIB::Cefccglobaltable : public ydk::Entity
{
    public:
        Cefccglobaltable();
        ~Cefccglobaltable();

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

        class Cefccglobalentry; //type: CISCOCEFMIB::Cefccglobaltable::Cefccglobalentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefccglobaltable::Cefccglobalentry> > cefccglobalentry;
        
}; // CISCOCEFMIB::Cefccglobaltable


class CISCOCEFMIB::Cefccglobaltable::Cefccglobalentry : public ydk::Entity
{
    public:
        Cefccglobalentry();
        ~Cefccglobalentry();

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

        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefccglobalautorepairenabled; //type: boolean
        ydk::YLeaf cefccglobalautorepairdelay; //type: uint32
        ydk::YLeaf cefccglobalautorepairholddown; //type: uint32
        ydk::YLeaf cefccglobalerrormsgenabled; //type: boolean
        ydk::YLeaf cefccglobalfullscanaction; //type: CefCCAction
        ydk::YLeaf cefccglobalfullscanstatus; //type: CefCCStatus

}; // CISCOCEFMIB::Cefccglobaltable::Cefccglobalentry


class CISCOCEFMIB::Cefcctypetable : public ydk::Entity
{
    public:
        Cefcctypetable();
        ~Cefcctypetable();

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

        class Cefcctypeentry; //type: CISCOCEFMIB::Cefcctypetable::Cefcctypeentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefcctypetable::Cefcctypeentry> > cefcctypeentry;
        
}; // CISCOCEFMIB::Cefcctypetable


class CISCOCEFMIB::Cefcctypetable::Cefcctypeentry : public ydk::Entity
{
    public:
        Cefcctypeentry();
        ~Cefcctypeentry();

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

        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefcctype; //type: CefCCType
        ydk::YLeaf cefccenabled; //type: boolean
        ydk::YLeaf cefcccount; //type: uint32
        ydk::YLeaf cefccperiod; //type: uint32
        ydk::YLeaf cefccqueriessent; //type: uint32
        ydk::YLeaf cefccqueriesignored; //type: uint32
        ydk::YLeaf cefccquerieschecked; //type: uint32
        ydk::YLeaf cefccqueriesiterated; //type: uint32

}; // CISCOCEFMIB::Cefcctypetable::Cefcctypeentry


class CISCOCEFMIB::Cefcfgtable : public ydk::Entity
{
    public:
        Cefcfgtable();
        ~Cefcfgtable();

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

        class Cefcfgentry; //type: CISCOCEFMIB::Cefcfgtable::Cefcfgentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefcfgtable::Cefcfgentry> > cefcfgentry;
        
}; // CISCOCEFMIB::Cefcfgtable


class CISCOCEFMIB::Cefcfgtable::Cefcfgentry : public ydk::Entity
{
    public:
        Cefcfgentry();
        ~Cefcfgentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefcfgadminstate; //type: CefAdminStatus
        ydk::YLeaf cefcfgoperstate; //type: CefOperStatus
        ydk::YLeaf cefcfgdistributionadminstate; //type: CefAdminStatus
        ydk::YLeaf cefcfgdistributionoperstate; //type: CefOperStatus
        ydk::YLeaf cefcfgaccountingmap; //type: Cefcfgaccountingmap
        ydk::YLeaf cefcfgloadsharingalgorithm; //type: Cefcfgloadsharingalgorithm
        ydk::YLeaf cefcfgloadsharingid; //type: uint32
        ydk::YLeaf cefcfgtrafficstatsloadinterval; //type: uint32
        ydk::YLeaf cefcfgtrafficstatsupdaterate; //type: uint32
        class Cefcfgloadsharingalgorithm;

}; // CISCOCEFMIB::Cefcfgtable::Cefcfgentry


class CISCOCEFMIB::Ceffeselectiontable : public ydk::Entity
{
    public:
        Ceffeselectiontable();
        ~Ceffeselectiontable();

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

        class Ceffeselectionentry; //type: CISCOCEFMIB::Ceffeselectiontable::Ceffeselectionentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Ceffeselectiontable::Ceffeselectionentry> > ceffeselectionentry;
        
}; // CISCOCEFMIB::Ceffeselectiontable


class CISCOCEFMIB::Ceffeselectiontable::Ceffeselectionentry : public ydk::Entity
{
    public:
        Ceffeselectionentry();
        ~Ceffeselectionentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffeselectionname; //type: string
        ydk::YLeaf ceffeselectionid; //type: int32
        ydk::YLeaf ceffeselectionspecial; //type: CefForwardingElementSpecialType
        ydk::YLeaf ceffeselectionlabels; //type: binary
        ydk::YLeaf ceffeselectionadjlinktype; //type: CefAdjLinkType
        ydk::YLeaf ceffeselectionadjinterface; //type: int32
        ydk::YLeaf ceffeselectionadjnexthopaddrtype; //type: InetAddressType
        ydk::YLeaf ceffeselectionadjnexthopaddr; //type: binary
        ydk::YLeaf ceffeselectionadjconnid; //type: uint32
        ydk::YLeaf ceffeselectionvrfname; //type: binary
        ydk::YLeaf ceffeselectionweight; //type: uint32

}; // CISCOCEFMIB::Ceffeselectiontable::Ceffeselectionentry


class CISCOCEFMIB::Ceffib : public ydk::Entity
{
    public:
        Ceffib();
        ~Ceffib();

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

        ydk::YLeaf ceflmprefixspinlock; //type: int32

}; // CISCOCEFMIB::Ceffib


class CISCOCEFMIB::Ceffibsummarytable : public ydk::Entity
{
    public:
        Ceffibsummarytable();
        ~Ceffibsummarytable();

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

        class Ceffibsummaryentry; //type: CISCOCEFMIB::Ceffibsummarytable::Ceffibsummaryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Ceffibsummarytable::Ceffibsummaryentry> > ceffibsummaryentry;
        
}; // CISCOCEFMIB::Ceffibsummarytable


class CISCOCEFMIB::Ceffibsummarytable::Ceffibsummaryentry : public ydk::Entity
{
    public:
        Ceffibsummaryentry();
        ~Ceffibsummaryentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf ceffibsummaryfwdprefixes; //type: uint32

}; // CISCOCEFMIB::Ceffibsummarytable::Ceffibsummaryentry


class CISCOCEFMIB::Cefinconsistencyrecordtable : public ydk::Entity
{
    public:
        Cefinconsistencyrecordtable();
        ~Cefinconsistencyrecordtable();

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

        class Cefinconsistencyrecordentry; //type: CISCOCEFMIB::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry> > cefinconsistencyrecordentry;
        
}; // CISCOCEFMIB::Cefinconsistencyrecordtable


class CISCOCEFMIB::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry : public ydk::Entity
{
    public:
        Cefinconsistencyrecordentry();
        ~Cefinconsistencyrecordentry();

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

        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefinconsistencyrecid; //type: int32
        ydk::YLeaf cefinconsistencyprefixtype; //type: InetAddressType
        ydk::YLeaf cefinconsistencyprefixaddr; //type: binary
        ydk::YLeaf cefinconsistencyprefixlen; //type: uint32
        ydk::YLeaf cefinconsistencyvrfname; //type: binary
        ydk::YLeaf cefinconsistencycctype; //type: CefCCType
        ydk::YLeaf cefinconsistencyentity; //type: int32
        ydk::YLeaf cefinconsistencyreason; //type: Cefinconsistencyreason
        class Cefinconsistencyreason;

}; // CISCOCEFMIB::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry


class CISCOCEFMIB::Cefinttable : public ydk::Entity
{
    public:
        Cefinttable();
        ~Cefinttable();

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

        class Cefintentry; //type: CISCOCEFMIB::Cefinttable::Cefintentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefinttable::Cefintentry> > cefintentry;
        
}; // CISCOCEFMIB::Cefinttable


class CISCOCEFMIB::Cefinttable::Cefintentry : public ydk::Entity
{
    public:
        Cefintentry();
        ~Cefintentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cefintswitchingstate; //type: Cefintswitchingstate
        ydk::YLeaf cefintloadsharing; //type: Cefintloadsharing
        ydk::YLeaf cefintnonrecursiveaccouting; //type: Cefintnonrecursiveaccouting
        class Cefintswitchingstate;
        class Cefintloadsharing;
        class Cefintnonrecursiveaccouting;

}; // CISCOCEFMIB::Cefinttable::Cefintentry


class CISCOCEFMIB::Ceflmprefixtable : public ydk::Entity
{
    public:
        Ceflmprefixtable();
        ~Ceflmprefixtable();

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

        class Ceflmprefixentry; //type: CISCOCEFMIB::Ceflmprefixtable::Ceflmprefixentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Ceflmprefixtable::Ceflmprefixentry> > ceflmprefixentry;
        
}; // CISCOCEFMIB::Ceflmprefixtable


class CISCOCEFMIB::Ceflmprefixtable::Ceflmprefixentry : public ydk::Entity
{
    public:
        Ceflmprefixentry();
        ~Ceflmprefixentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceflmprefixdestaddrtype; //type: InetAddressType
        ydk::YLeaf ceflmprefixdestaddr; //type: binary
        ydk::YLeaf ceflmprefixstate; //type: CefPrefixSearchState
        ydk::YLeaf ceflmprefixaddr; //type: binary
        ydk::YLeaf ceflmprefixlen; //type: uint32
        ydk::YLeaf ceflmprefixrowstatus; //type: RowStatus

}; // CISCOCEFMIB::Ceflmprefixtable::Ceflmprefixentry


class CISCOCEFMIB::Cefnotifcntl : public ydk::Entity
{
    public:
        Cefnotifcntl();
        ~Cefnotifcntl();

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

        ydk::YLeaf cefresourcefailurenotifenable; //type: boolean
        ydk::YLeaf cefpeerstatechangenotifenable; //type: boolean
        ydk::YLeaf cefpeerfibstatechangenotifenable; //type: boolean
        ydk::YLeaf cefnotifthrottlinginterval; //type: int32
        ydk::YLeaf cefinconsistencynotifenable; //type: boolean

}; // CISCOCEFMIB::Cefnotifcntl


class CISCOCEFMIB::Cefpathtable : public ydk::Entity
{
    public:
        Cefpathtable();
        ~Cefpathtable();

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

        class Cefpathentry; //type: CISCOCEFMIB::Cefpathtable::Cefpathentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefpathtable::Cefpathentry> > cefpathentry;
        
}; // CISCOCEFMIB::Cefpathtable


class CISCOCEFMIB::Cefpathtable::Cefpathentry : public ydk::Entity
{
    public:
        Cefpathentry();
        ~Cefpathentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefprefixtype; //type: InetAddressType
        //type: binary (refers to cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefprefixtable::Cefprefixentry::cefprefixaddr)
        ydk::YLeaf cefprefixaddr;
        //type: uint32 (refers to cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefprefixtable::Cefprefixentry::cefprefixlen)
        ydk::YLeaf cefprefixlen;
        ydk::YLeaf cefpathid; //type: int32
        ydk::YLeaf cefpathtype; //type: CefPathType
        ydk::YLeaf cefpathinterface; //type: int32
        ydk::YLeaf cefpathnexthopaddr; //type: binary
        ydk::YLeaf cefpathrecursevrfname; //type: binary

}; // CISCOCEFMIB::Cefpathtable::Cefpathentry


class CISCOCEFMIB::Cefpeerfibtable : public ydk::Entity
{
    public:
        Cefpeerfibtable();
        ~Cefpeerfibtable();

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

        class Cefpeerfibentry; //type: CISCOCEFMIB::Cefpeerfibtable::Cefpeerfibentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefpeerfibtable::Cefpeerfibentry> > cefpeerfibentry;
        
}; // CISCOCEFMIB::Cefpeerfibtable


class CISCOCEFMIB::Cefpeerfibtable::Cefpeerfibentry : public ydk::Entity
{
    public:
        Cefpeerfibentry();
        ~Cefpeerfibentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefpeertable::Cefpeerentry::entpeerphysicalindex)
        ydk::YLeaf entpeerphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefpeerfiboperstate; //type: Cefpeerfiboperstate
        class Cefpeerfiboperstate;

}; // CISCOCEFMIB::Cefpeerfibtable::Cefpeerfibentry


class CISCOCEFMIB::Cefpeertable : public ydk::Entity
{
    public:
        Cefpeertable();
        ~Cefpeertable();

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

        class Cefpeerentry; //type: CISCOCEFMIB::Cefpeertable::Cefpeerentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefpeertable::Cefpeerentry> > cefpeerentry;
        
}; // CISCOCEFMIB::Cefpeertable


class CISCOCEFMIB::Cefpeertable::Cefpeerentry : public ydk::Entity
{
    public:
        Cefpeerentry();
        ~Cefpeerentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf entpeerphysicalindex; //type: int32
        ydk::YLeaf cefpeeroperstate; //type: Cefpeeroperstate
        ydk::YLeaf cefpeernumberofresets; //type: uint32
        class Cefpeeroperstate;

}; // CISCOCEFMIB::Cefpeertable::Cefpeerentry


class CISCOCEFMIB::Cefprefixtable : public ydk::Entity
{
    public:
        Cefprefixtable();
        ~Cefprefixtable();

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

        class Cefprefixentry; //type: CISCOCEFMIB::Cefprefixtable::Cefprefixentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefprefixtable::Cefprefixentry> > cefprefixentry;
        
}; // CISCOCEFMIB::Cefprefixtable


class CISCOCEFMIB::Cefprefixtable::Cefprefixentry : public ydk::Entity
{
    public:
        Cefprefixentry();
        ~Cefprefixentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefprefixtype; //type: InetAddressType
        ydk::YLeaf cefprefixaddr; //type: binary
        ydk::YLeaf cefprefixlen; //type: uint32
        ydk::YLeaf cefprefixforwardinginfo; //type: string
        ydk::YLeaf cefprefixpkts; //type: uint32
        ydk::YLeaf cefprefixhcpkts; //type: uint64
        ydk::YLeaf cefprefixbytes; //type: uint32
        ydk::YLeaf cefprefixhcbytes; //type: uint64
        ydk::YLeaf cefprefixinternalnrpkts; //type: uint32
        ydk::YLeaf cefprefixinternalnrhcpkts; //type: uint64
        ydk::YLeaf cefprefixinternalnrbytes; //type: uint32
        ydk::YLeaf cefprefixinternalnrhcbytes; //type: uint64
        ydk::YLeaf cefprefixexternalnrpkts; //type: uint32
        ydk::YLeaf cefprefixexternalnrhcpkts; //type: uint64
        ydk::YLeaf cefprefixexternalnrbytes; //type: uint32
        ydk::YLeaf cefprefixexternalnrhcbytes; //type: uint64

}; // CISCOCEFMIB::Cefprefixtable::Cefprefixentry


class CISCOCEFMIB::Cefresourcetable : public ydk::Entity
{
    public:
        Cefresourcetable();
        ~Cefresourcetable();

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

        class Cefresourceentry; //type: CISCOCEFMIB::Cefresourcetable::Cefresourceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefresourcetable::Cefresourceentry> > cefresourceentry;
        
}; // CISCOCEFMIB::Cefresourcetable


class CISCOCEFMIB::Cefresourcetable::Cefresourceentry : public ydk::Entity
{
    public:
        Cefresourceentry();
        ~Cefresourceentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefresourcememoryused; //type: uint32
        ydk::YLeaf cefresourcefailurereason; //type: CefFailureReason

}; // CISCOCEFMIB::Cefresourcetable::Cefresourceentry


class CISCOCEFMIB::Cefstatsprefixlentable : public ydk::Entity
{
    public:
        Cefstatsprefixlentable();
        ~Cefstatsprefixlentable();

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

        class Cefstatsprefixlenentry; //type: CISCOCEFMIB::Cefstatsprefixlentable::Cefstatsprefixlenentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefstatsprefixlentable::Cefstatsprefixlenentry> > cefstatsprefixlenentry;
        
}; // CISCOCEFMIB::Cefstatsprefixlentable


class CISCOCEFMIB::Cefstatsprefixlentable::Cefstatsprefixlenentry : public ydk::Entity
{
    public:
        Cefstatsprefixlenentry();
        ~Cefstatsprefixlenentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefstatsprefixlen; //type: uint32
        ydk::YLeaf cefstatsprefixqueries; //type: uint32
        ydk::YLeaf cefstatsprefixhcqueries; //type: uint64
        ydk::YLeaf cefstatsprefixinserts; //type: uint32
        ydk::YLeaf cefstatsprefixhcinserts; //type: uint64
        ydk::YLeaf cefstatsprefixdeletes; //type: uint32
        ydk::YLeaf cefstatsprefixhcdeletes; //type: uint64
        ydk::YLeaf cefstatsprefixelements; //type: uint32
        ydk::YLeaf cefstatsprefixhcelements; //type: uint64

}; // CISCOCEFMIB::Cefstatsprefixlentable::Cefstatsprefixlenentry


class CISCOCEFMIB::Cefswitchingstatstable : public ydk::Entity
{
    public:
        Cefswitchingstatstable();
        ~Cefswitchingstatstable();

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

        class Cefswitchingstatsentry; //type: CISCOCEFMIB::Cefswitchingstatstable::Cefswitchingstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::Cefswitchingstatstable::Cefswitchingstatsentry> > cefswitchingstatsentry;
        
}; // CISCOCEFMIB::Cefswitchingstatstable


class CISCOCEFMIB::Cefswitchingstatstable::Cefswitchingstatsentry : public ydk::Entity
{
    public:
        Cefswitchingstatsentry();
        ~Cefswitchingstatsentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefswitchingindex; //type: int32
        ydk::YLeaf cefswitchingpath; //type: string
        ydk::YLeaf cefswitchingdrop; //type: uint32
        ydk::YLeaf cefswitchinghcdrop; //type: uint64
        ydk::YLeaf cefswitchingpunt; //type: uint32
        ydk::YLeaf cefswitchinghcpunt; //type: uint64
        ydk::YLeaf cefswitchingpunt2host; //type: uint32
        ydk::YLeaf cefswitchinghcpunt2host; //type: uint64

}; // CISCOCEFMIB::Cefswitchingstatstable::Cefswitchingstatsentry

class CISCOCEFMIB::Cefcfgtable::Cefcfgentry::Cefcfgloadsharingalgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf original;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf universal;

};

class CISCOCEFMIB::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::Cefinconsistencyreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf missing;
        static const ydk::Enum::YLeaf checksumErr;
        static const ydk::Enum::YLeaf unknown;

};

class CISCOCEFMIB::Cefinttable::Cefintentry::Cefintswitchingstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cefEnabled;
        static const ydk::Enum::YLeaf distCefEnabled;
        static const ydk::Enum::YLeaf cefDisabled;

};

class CISCOCEFMIB::Cefinttable::Cefintentry::Cefintloadsharing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf perPacket;
        static const ydk::Enum::YLeaf perDestination;

};

class CISCOCEFMIB::Cefinttable::Cefintentry::Cefintnonrecursiveaccouting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

};

class CISCOCEFMIB::Cefpeerfibtable::Cefpeerfibentry::Cefpeerfiboperstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peerFIBDown;
        static const ydk::Enum::YLeaf peerFIBUp;
        static const ydk::Enum::YLeaf peerFIBReloadRequest;
        static const ydk::Enum::YLeaf peerFIBReloading;
        static const ydk::Enum::YLeaf peerFIBSynced;

};

class CISCOCEFMIB::Cefpeertable::Cefpeerentry::Cefpeeroperstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peerDisabled;
        static const ydk::Enum::YLeaf peerUp;
        static const ydk::Enum::YLeaf peerHold;

};


}
}

#endif /* _CISCO_CEF_MIB_ */

