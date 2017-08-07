#ifndef _CISCO_CEF_MIB_
#define _CISCO_CEF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CEF_MIB {

class CiscoCefMib : public ydk::Entity
{
    public:
        CiscoCefMib();
        ~CiscoCefMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Ceffib; //type: CiscoCefMib::Ceffib
        class Cefcc; //type: CiscoCefMib::Cefcc
        class Cefnotifcntl; //type: CiscoCefMib::Cefnotifcntl
        class Ceffibsummarytable; //type: CiscoCefMib::Ceffibsummarytable
        class Cefprefixtable; //type: CiscoCefMib::Cefprefixtable
        class Ceflmprefixtable; //type: CiscoCefMib::Ceflmprefixtable
        class Cefpathtable; //type: CiscoCefMib::Cefpathtable
        class Cefadjsummarytable; //type: CiscoCefMib::Cefadjsummarytable
        class Cefadjtable; //type: CiscoCefMib::Cefadjtable
        class Ceffeselectiontable; //type: CiscoCefMib::Ceffeselectiontable
        class Cefcfgtable; //type: CiscoCefMib::Cefcfgtable
        class Cefresourcetable; //type: CiscoCefMib::Cefresourcetable
        class Cefinttable; //type: CiscoCefMib::Cefinttable
        class Cefpeertable; //type: CiscoCefMib::Cefpeertable
        class Cefpeerfibtable; //type: CiscoCefMib::Cefpeerfibtable
        class Cefccglobaltable; //type: CiscoCefMib::Cefccglobaltable
        class Cefcctypetable; //type: CiscoCefMib::Cefcctypetable
        class Cefinconsistencyrecordtable; //type: CiscoCefMib::Cefinconsistencyrecordtable
        class Cefstatsprefixlentable; //type: CiscoCefMib::Cefstatsprefixlentable
        class Cefswitchingstatstable; //type: CiscoCefMib::Cefswitchingstatstable

        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefadjsummarytable> cefadjsummarytable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefadjtable> cefadjtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcc> cefcc;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefccglobaltable> cefccglobaltable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcctypetable> cefcctypetable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcfgtable> cefcfgtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffeselectiontable> ceffeselectiontable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffib> ceffib;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffibsummarytable> ceffibsummarytable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefinconsistencyrecordtable> cefinconsistencyrecordtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefinttable> cefinttable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceflmprefixtable> ceflmprefixtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefnotifcntl> cefnotifcntl;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpathtable> cefpathtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpeerfibtable> cefpeerfibtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpeertable> cefpeertable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefprefixtable> cefprefixtable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefresourcetable> cefresourcetable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefstatsprefixlentable> cefstatsprefixlentable;
        std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefswitchingstatstable> cefswitchingstatstable;
        
}; // CiscoCefMib


class CiscoCefMib::Ceffib : public ydk::Entity
{
    public:
        Ceffib();
        ~Ceffib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ceflmprefixspinlock; //type: int32

}; // CiscoCefMib::Ceffib


class CiscoCefMib::Cefcc : public ydk::Entity
{
    public:
        Cefcc();
        ~Cefcc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entlastinconsistencydetecttime; //type: uint32
        ydk::YLeaf cefinconsistencyreset; //type: Cefccaction
        ydk::YLeaf cefinconsistencyresetstatus; //type: Cefccstatus

}; // CiscoCefMib::Cefcc


class CiscoCefMib::Cefnotifcntl : public ydk::Entity
{
    public:
        Cefnotifcntl();
        ~Cefnotifcntl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cefresourcefailurenotifenable; //type: boolean
        ydk::YLeaf cefpeerstatechangenotifenable; //type: boolean
        ydk::YLeaf cefpeerfibstatechangenotifenable; //type: boolean
        ydk::YLeaf cefnotifthrottlinginterval; //type: int32
        ydk::YLeaf cefinconsistencynotifenable; //type: boolean

}; // CiscoCefMib::Cefnotifcntl


class CiscoCefMib::Ceffibsummarytable : public ydk::Entity
{
    public:
        Ceffibsummarytable();
        ~Ceffibsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceffibsummaryentry; //type: CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry> > ceffibsummaryentry;
        
}; // CiscoCefMib::Ceffibsummarytable


class CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry : public ydk::Entity
{
    public:
        Ceffibsummaryentry();
        ~Ceffibsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: Cefipversion
        ydk::YLeaf ceffibsummaryfwdprefixes; //type: uint32

}; // CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry


class CiscoCefMib::Cefprefixtable : public ydk::Entity
{
    public:
        Cefprefixtable();
        ~Cefprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefprefixentry; //type: CiscoCefMib::Cefprefixtable::Cefprefixentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefprefixtable::Cefprefixentry> > cefprefixentry;
        
}; // CiscoCefMib::Cefprefixtable


class CiscoCefMib::Cefprefixtable::Cefprefixentry : public ydk::Entity
{
    public:
        Cefprefixentry();
        ~Cefprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefprefixtype; //type: Inetaddresstype
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

}; // CiscoCefMib::Cefprefixtable::Cefprefixentry


class CiscoCefMib::Ceflmprefixtable : public ydk::Entity
{
    public:
        Ceflmprefixtable();
        ~Ceflmprefixtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceflmprefixentry; //type: CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry> > ceflmprefixentry;
        
}; // CiscoCefMib::Ceflmprefixtable


class CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry : public ydk::Entity
{
    public:
        Ceflmprefixentry();
        ~Ceflmprefixentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceflmprefixdestaddrtype; //type: Inetaddresstype
        ydk::YLeaf ceflmprefixdestaddr; //type: binary
        ydk::YLeaf ceflmprefixstate; //type: Cefprefixsearchstate
        ydk::YLeaf ceflmprefixaddr; //type: binary
        ydk::YLeaf ceflmprefixlen; //type: uint32
        ydk::YLeaf ceflmprefixrowstatus; //type: Rowstatus

}; // CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry


class CiscoCefMib::Cefpathtable : public ydk::Entity
{
    public:
        Cefpathtable();
        ~Cefpathtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefpathentry; //type: CiscoCefMib::Cefpathtable::Cefpathentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpathtable::Cefpathentry> > cefpathentry;
        
}; // CiscoCefMib::Cefpathtable


class CiscoCefMib::Cefpathtable::Cefpathentry : public ydk::Entity
{
    public:
        Cefpathentry();
        ~Cefpathentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefprefixtype; //type: Inetaddresstype
        //type: binary (refers to CISCO_CEF_MIB::CiscoCefMib::Cefprefixtable::Cefprefixentry::cefprefixaddr)
        ydk::YLeaf cefprefixaddr;
        //type: uint32 (refers to CISCO_CEF_MIB::CiscoCefMib::Cefprefixtable::Cefprefixentry::cefprefixlen)
        ydk::YLeaf cefprefixlen;
        ydk::YLeaf cefpathid; //type: int32
        ydk::YLeaf cefpathtype; //type: Cefpathtype
        ydk::YLeaf cefpathinterface; //type: int32
        ydk::YLeaf cefpathnexthopaddr; //type: binary
        ydk::YLeaf cefpathrecursevrfname; //type: binary

}; // CiscoCefMib::Cefpathtable::Cefpathentry


class CiscoCefMib::Cefadjsummarytable : public ydk::Entity
{
    public:
        Cefadjsummarytable();
        ~Cefadjsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefadjsummaryentry; //type: CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry> > cefadjsummaryentry;
        
}; // CiscoCefMib::Cefadjsummarytable


class CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry : public ydk::Entity
{
    public:
        Cefadjsummaryentry();
        ~Cefadjsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefadjsummarylinktype; //type: Cefadjlinktype
        ydk::YLeaf cefadjsummarycomplete; //type: uint32
        ydk::YLeaf cefadjsummaryincomplete; //type: uint32
        ydk::YLeaf cefadjsummaryfixup; //type: uint32
        ydk::YLeaf cefadjsummaryredirect; //type: uint32

}; // CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry


class CiscoCefMib::Cefadjtable : public ydk::Entity
{
    public:
        Cefadjtable();
        ~Cefadjtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefadjentry; //type: CiscoCefMib::Cefadjtable::Cefadjentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefadjtable::Cefadjentry> > cefadjentry;
        
}; // CiscoCefMib::Cefadjtable


class CiscoCefMib::Cefadjtable::Cefadjentry : public ydk::Entity
{
    public:
        Cefadjentry();
        ~Cefadjentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cefadjnexthopaddrtype; //type: Inetaddresstype
        ydk::YLeaf cefadjnexthopaddr; //type: binary
        ydk::YLeaf cefadjconnid; //type: uint32
        ydk::YLeaf cefadjsummarylinktype; //type: Cefadjlinktype
        ydk::YLeaf cefadjsource; //type: Cefadjacencysource
        ydk::YLeaf cefadjencap; //type: string
        ydk::YLeaf cefadjfixup; //type: string
        ydk::YLeaf cefadjmtu; //type: uint32
        ydk::YLeaf cefadjforwardinginfo; //type: string
        ydk::YLeaf cefadjpkts; //type: uint32
        ydk::YLeaf cefadjhcpkts; //type: uint64
        ydk::YLeaf cefadjbytes; //type: uint32
        ydk::YLeaf cefadjhcbytes; //type: uint64

}; // CiscoCefMib::Cefadjtable::Cefadjentry


class CiscoCefMib::Ceffeselectiontable : public ydk::Entity
{
    public:
        Ceffeselectiontable();
        ~Ceffeselectiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceffeselectionentry; //type: CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry> > ceffeselectionentry;
        
}; // CiscoCefMib::Ceffeselectiontable


class CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry : public ydk::Entity
{
    public:
        Ceffeselectionentry();
        ~Ceffeselectionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffeselectionname; //type: string
        ydk::YLeaf ceffeselectionid; //type: int32
        ydk::YLeaf ceffeselectionspecial; //type: Cefforwardingelementspecialtype
        ydk::YLeaf ceffeselectionlabels; //type: binary
        ydk::YLeaf ceffeselectionadjlinktype; //type: Cefadjlinktype
        ydk::YLeaf ceffeselectionadjinterface; //type: int32
        ydk::YLeaf ceffeselectionadjnexthopaddrtype; //type: Inetaddresstype
        ydk::YLeaf ceffeselectionadjnexthopaddr; //type: binary
        ydk::YLeaf ceffeselectionadjconnid; //type: uint32
        ydk::YLeaf ceffeselectionvrfname; //type: binary
        ydk::YLeaf ceffeselectionweight; //type: uint32

}; // CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry


class CiscoCefMib::Cefcfgtable : public ydk::Entity
{
    public:
        Cefcfgtable();
        ~Cefcfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcfgentry; //type: CiscoCefMib::Cefcfgtable::Cefcfgentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcfgtable::Cefcfgentry> > cefcfgentry;
        
}; // CiscoCefMib::Cefcfgtable


class CiscoCefMib::Cefcfgtable::Cefcfgentry : public ydk::Entity
{
    public:
        Cefcfgentry();
        ~Cefcfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: Cefipversion
        ydk::YLeaf cefcfgadminstate; //type: Cefadminstatus
        ydk::YLeaf cefcfgoperstate; //type: Cefoperstatus
        ydk::YLeaf cefcfgdistributionadminstate; //type: Cefadminstatus
        ydk::YLeaf cefcfgdistributionoperstate; //type: Cefoperstatus
        ydk::YLeaf cefcfgaccountingmap; //type: Cefcfgaccountingmap
        ydk::YLeaf cefcfgloadsharingalgorithm; //type: Cefcfgloadsharingalgorithm
        ydk::YLeaf cefcfgloadsharingid; //type: uint32
        ydk::YLeaf cefcfgtrafficstatsloadinterval; //type: uint32
        ydk::YLeaf cefcfgtrafficstatsupdaterate; //type: uint32
        class Cefcfgloadsharingalgorithm;

}; // CiscoCefMib::Cefcfgtable::Cefcfgentry


class CiscoCefMib::Cefresourcetable : public ydk::Entity
{
    public:
        Cefresourcetable();
        ~Cefresourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefresourceentry; //type: CiscoCefMib::Cefresourcetable::Cefresourceentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefresourcetable::Cefresourceentry> > cefresourceentry;
        
}; // CiscoCefMib::Cefresourcetable


class CiscoCefMib::Cefresourcetable::Cefresourceentry : public ydk::Entity
{
    public:
        Cefresourceentry();
        ~Cefresourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefresourcememoryused; //type: uint32
        ydk::YLeaf cefresourcefailurereason; //type: Ceffailurereason

}; // CiscoCefMib::Cefresourcetable::Cefresourceentry


class CiscoCefMib::Cefinttable : public ydk::Entity
{
    public:
        Cefinttable();
        ~Cefinttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefintentry; //type: CiscoCefMib::Cefinttable::Cefintentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefinttable::Cefintentry> > cefintentry;
        
}; // CiscoCefMib::Cefinttable


class CiscoCefMib::Cefinttable::Cefintentry : public ydk::Entity
{
    public:
        Cefintentry();
        ~Cefintentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: Cefipversion
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cefintswitchingstate; //type: Cefintswitchingstate
        ydk::YLeaf cefintloadsharing; //type: Cefintloadsharing
        ydk::YLeaf cefintnonrecursiveaccouting; //type: Cefintnonrecursiveaccouting
        class Cefintswitchingstate;
        class Cefintloadsharing;
        class Cefintnonrecursiveaccouting;

}; // CiscoCefMib::Cefinttable::Cefintentry


class CiscoCefMib::Cefpeertable : public ydk::Entity
{
    public:
        Cefpeertable();
        ~Cefpeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefpeerentry; //type: CiscoCefMib::Cefpeertable::Cefpeerentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpeertable::Cefpeerentry> > cefpeerentry;
        
}; // CiscoCefMib::Cefpeertable


class CiscoCefMib::Cefpeertable::Cefpeerentry : public ydk::Entity
{
    public:
        Cefpeerentry();
        ~Cefpeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf entpeerphysicalindex; //type: int32
        ydk::YLeaf cefpeeroperstate; //type: Cefpeeroperstate
        ydk::YLeaf cefpeernumberofresets; //type: uint32
        class Cefpeeroperstate;

}; // CiscoCefMib::Cefpeertable::Cefpeerentry


class CiscoCefMib::Cefpeerfibtable : public ydk::Entity
{
    public:
        Cefpeerfibtable();
        ~Cefpeerfibtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefpeerfibentry; //type: CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry> > cefpeerfibentry;
        
}; // CiscoCefMib::Cefpeerfibtable


class CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry : public ydk::Entity
{
    public:
        Cefpeerfibentry();
        ~Cefpeerfibentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: int32 (refers to CISCO_CEF_MIB::CiscoCefMib::Cefpeertable::Cefpeerentry::entpeerphysicalindex)
        ydk::YLeaf entpeerphysicalindex;
        ydk::YLeaf ceffibipversion; //type: Cefipversion
        ydk::YLeaf cefpeerfiboperstate; //type: Cefpeerfiboperstate
        class Cefpeerfiboperstate;

}; // CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry


class CiscoCefMib::Cefccglobaltable : public ydk::Entity
{
    public:
        Cefccglobaltable();
        ~Cefccglobaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefccglobalentry; //type: CiscoCefMib::Cefccglobaltable::Cefccglobalentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefccglobaltable::Cefccglobalentry> > cefccglobalentry;
        
}; // CiscoCefMib::Cefccglobaltable


class CiscoCefMib::Cefccglobaltable::Cefccglobalentry : public ydk::Entity
{
    public:
        Cefccglobalentry();
        ~Cefccglobalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ceffibipversion; //type: Cefipversion
        ydk::YLeaf cefccglobalautorepairenabled; //type: boolean
        ydk::YLeaf cefccglobalautorepairdelay; //type: uint32
        ydk::YLeaf cefccglobalautorepairholddown; //type: uint32
        ydk::YLeaf cefccglobalerrormsgenabled; //type: boolean
        ydk::YLeaf cefccglobalfullscanaction; //type: Cefccaction
        ydk::YLeaf cefccglobalfullscanstatus; //type: Cefccstatus

}; // CiscoCefMib::Cefccglobaltable::Cefccglobalentry


class CiscoCefMib::Cefcctypetable : public ydk::Entity
{
    public:
        Cefcctypetable();
        ~Cefcctypetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcctypeentry; //type: CiscoCefMib::Cefcctypetable::Cefcctypeentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefcctypetable::Cefcctypeentry> > cefcctypeentry;
        
}; // CiscoCefMib::Cefcctypetable


class CiscoCefMib::Cefcctypetable::Cefcctypeentry : public ydk::Entity
{
    public:
        Cefcctypeentry();
        ~Cefcctypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ceffibipversion; //type: Cefipversion
        ydk::YLeaf cefcctype; //type: Cefcctype
        ydk::YLeaf cefccenabled; //type: boolean
        ydk::YLeaf cefcccount; //type: uint32
        ydk::YLeaf cefccperiod; //type: uint32
        ydk::YLeaf cefccqueriessent; //type: uint32
        ydk::YLeaf cefccqueriesignored; //type: uint32
        ydk::YLeaf cefccquerieschecked; //type: uint32
        ydk::YLeaf cefccqueriesiterated; //type: uint32

}; // CiscoCefMib::Cefcctypetable::Cefcctypeentry


class CiscoCefMib::Cefinconsistencyrecordtable : public ydk::Entity
{
    public:
        Cefinconsistencyrecordtable();
        ~Cefinconsistencyrecordtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefinconsistencyrecordentry; //type: CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry> > cefinconsistencyrecordentry;
        
}; // CiscoCefMib::Cefinconsistencyrecordtable


class CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry : public ydk::Entity
{
    public:
        Cefinconsistencyrecordentry();
        ~Cefinconsistencyrecordentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ceffibipversion; //type: Cefipversion
        ydk::YLeaf cefinconsistencyrecid; //type: int32
        ydk::YLeaf cefinconsistencyprefixtype; //type: Inetaddresstype
        ydk::YLeaf cefinconsistencyprefixaddr; //type: binary
        ydk::YLeaf cefinconsistencyprefixlen; //type: uint32
        ydk::YLeaf cefinconsistencyvrfname; //type: binary
        ydk::YLeaf cefinconsistencycctype; //type: Cefcctype
        ydk::YLeaf cefinconsistencyentity; //type: int32
        ydk::YLeaf cefinconsistencyreason; //type: Cefinconsistencyreason
        class Cefinconsistencyreason;

}; // CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry


class CiscoCefMib::Cefstatsprefixlentable : public ydk::Entity
{
    public:
        Cefstatsprefixlentable();
        ~Cefstatsprefixlentable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefstatsprefixlenentry; //type: CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry> > cefstatsprefixlenentry;
        
}; // CiscoCefMib::Cefstatsprefixlentable


class CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry : public ydk::Entity
{
    public:
        Cefstatsprefixlenentry();
        ~Cefstatsprefixlenentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: Cefipversion
        ydk::YLeaf cefstatsprefixlen; //type: uint32
        ydk::YLeaf cefstatsprefixqueries; //type: uint32
        ydk::YLeaf cefstatsprefixhcqueries; //type: uint64
        ydk::YLeaf cefstatsprefixinserts; //type: uint32
        ydk::YLeaf cefstatsprefixhcinserts; //type: uint64
        ydk::YLeaf cefstatsprefixdeletes; //type: uint32
        ydk::YLeaf cefstatsprefixhcdeletes; //type: uint64
        ydk::YLeaf cefstatsprefixelements; //type: uint32
        ydk::YLeaf cefstatsprefixhcelements; //type: uint64

}; // CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry


class CiscoCefMib::Cefswitchingstatstable : public ydk::Entity
{
    public:
        Cefswitchingstatstable();
        ~Cefswitchingstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefswitchingstatsentry; //type: CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry

        std::vector<std::shared_ptr<CISCO_CEF_MIB::CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry> > cefswitchingstatsentry;
        
}; // CiscoCefMib::Cefswitchingstatstable


class CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry : public ydk::Entity
{
    public:
        Cefswitchingstatsentry();
        ~Cefswitchingstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: Cefipversion
        ydk::YLeaf cefswitchingindex; //type: int32
        ydk::YLeaf cefswitchingpath; //type: string
        ydk::YLeaf cefswitchingdrop; //type: uint32
        ydk::YLeaf cefswitchinghcdrop; //type: uint64
        ydk::YLeaf cefswitchingpunt; //type: uint32
        ydk::YLeaf cefswitchinghcpunt; //type: uint64
        ydk::YLeaf cefswitchingpunt2host; //type: uint32
        ydk::YLeaf cefswitchinghcpunt2host; //type: uint64

}; // CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry

class CiscoCefMib::Cefcfgtable::Cefcfgentry::Cefcfgloadsharingalgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf original;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf universal;

};

class CiscoCefMib::Cefinttable::Cefintentry::Cefintswitchingstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cefEnabled;
        static const ydk::Enum::YLeaf distCefEnabled;
        static const ydk::Enum::YLeaf cefDisabled;

};

class CiscoCefMib::Cefinttable::Cefintentry::Cefintloadsharing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf perPacket;
        static const ydk::Enum::YLeaf perDestination;

};

class CiscoCefMib::Cefinttable::Cefintentry::Cefintnonrecursiveaccouting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

};

class CiscoCefMib::Cefpeertable::Cefpeerentry::Cefpeeroperstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peerDisabled;
        static const ydk::Enum::YLeaf peerUp;
        static const ydk::Enum::YLeaf peerHold;

};

class CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::Cefpeerfiboperstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peerFIBDown;
        static const ydk::Enum::YLeaf peerFIBUp;
        static const ydk::Enum::YLeaf peerFIBReloadRequest;
        static const ydk::Enum::YLeaf peerFIBReloading;
        static const ydk::Enum::YLeaf peerFIBSynced;

};

class CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::Cefinconsistencyreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf missing;
        static const ydk::Enum::YLeaf checksumErr;
        static const ydk::Enum::YLeaf unknown;

};


}
}

#endif /* _CISCO_CEF_MIB_ */

