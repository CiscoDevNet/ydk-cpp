#ifndef _CISCO_PROCESS_MIB_
#define _CISCO_PROCESS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_PROCESS_MIB {

class CISCOPROCESSMIB : public ydk::Entity
{
    public:
        CISCOPROCESSMIB();
        ~CISCOPROCESSMIB();

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

        class Cpmcpuhistory; //type: CISCOPROCESSMIB::Cpmcpuhistory
        class Cpmcputotaltable; //type: CISCOPROCESSMIB::Cpmcputotaltable
        class Cpmcoretable; //type: CISCOPROCESSMIB::Cpmcoretable
        class Cpmprocesstable; //type: CISCOPROCESSMIB::Cpmprocesstable
        class Cpmprocessextrevtable; //type: CISCOPROCESSMIB::Cpmprocessextrevtable
        class Cpmcputhresholdtable; //type: CISCOPROCESSMIB::Cpmcputhresholdtable
        class Cpmcpuhistorytable; //type: CISCOPROCESSMIB::Cpmcpuhistorytable
        class Cpmcpuprocesshistorytable; //type: CISCOPROCESSMIB::Cpmcpuprocesshistorytable
        class Cpmthreadtable; //type: CISCOPROCESSMIB::Cpmthreadtable
        class Cpmvirtualprocesstable; //type: CISCOPROCESSMIB::Cpmvirtualprocesstable

        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcoretable> cpmcoretable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcpuhistory> cpmcpuhistory;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcpuhistorytable> cpmcpuhistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcpuprocesshistorytable> cpmcpuprocesshistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputhresholdtable> cpmcputhresholdtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable> cpmcputotaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmprocessextrevtable> cpmprocessextrevtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmprocesstable> cpmprocesstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmthreadtable> cpmthreadtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmvirtualprocesstable> cpmvirtualprocesstable;
        
}; // CISCOPROCESSMIB


class CISCOPROCESSMIB::Cpmcoretable : public ydk::Entity
{
    public:
        Cpmcoretable();
        ~Cpmcoretable();

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

        class Cpmcoreentry; //type: CISCOPROCESSMIB::Cpmcoretable::Cpmcoreentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcoretable::Cpmcoreentry> > cpmcoreentry;
        
}; // CISCOPROCESSMIB::Cpmcoretable


class CISCOPROCESSMIB::Cpmcoretable::Cpmcoreentry : public ydk::Entity
{
    public:
        Cpmcoreentry();
        ~Cpmcoreentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmcoreindex; //type: uint32
        ydk::YLeaf cpmcorephysicalindex; //type: int32
        ydk::YLeaf cpmcore5sec; //type: uint32
        ydk::YLeaf cpmcore1min; //type: uint32
        ydk::YLeaf cpmcore5min; //type: uint32
        ydk::YLeaf cpmcoreloadavg1min; //type: uint32
        ydk::YLeaf cpmcoreloadavg5min; //type: uint32
        ydk::YLeaf cpmcoreloadavg15min; //type: uint32

}; // CISCOPROCESSMIB::Cpmcoretable::Cpmcoreentry


class CISCOPROCESSMIB::Cpmcpuhistory : public ydk::Entity
{
    public:
        Cpmcpuhistory();
        ~Cpmcpuhistory();

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

        ydk::YLeaf cpmcpuhistorythreshold; //type: uint32
        ydk::YLeaf cpmcpuhistorysize; //type: uint32

}; // CISCOPROCESSMIB::Cpmcpuhistory


class CISCOPROCESSMIB::Cpmcpuhistorytable : public ydk::Entity
{
    public:
        Cpmcpuhistorytable();
        ~Cpmcpuhistorytable();

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

        class Cpmcpuhistoryentry; //type: CISCOPROCESSMIB::Cpmcpuhistorytable::Cpmcpuhistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcpuhistorytable::Cpmcpuhistoryentry> > cpmcpuhistoryentry;
        
}; // CISCOPROCESSMIB::Cpmcpuhistorytable


class CISCOPROCESSMIB::Cpmcpuhistorytable::Cpmcpuhistoryentry : public ydk::Entity
{
    public:
        Cpmcpuhistoryentry();
        ~Cpmcpuhistoryentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmcpuhistoryreportid; //type: uint32
        ydk::YLeaf cpmcpuhistoryreportsize; //type: uint32
        ydk::YLeaf cpmcpuhistorytotalutil; //type: uint32
        ydk::YLeaf cpmcpuhistoryinterruptutil; //type: uint32
        ydk::YLeaf cpmcpuhistorycreatedtime; //type: uint32

}; // CISCOPROCESSMIB::Cpmcpuhistorytable::Cpmcpuhistoryentry


class CISCOPROCESSMIB::Cpmcpuprocesshistorytable : public ydk::Entity
{
    public:
        Cpmcpuprocesshistorytable();
        ~Cpmcpuprocesshistorytable();

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

        class Cpmcpuprocesshistoryentry; //type: CISCOPROCESSMIB::Cpmcpuprocesshistorytable::Cpmcpuprocesshistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcpuprocesshistorytable::Cpmcpuprocesshistoryentry> > cpmcpuprocesshistoryentry;
        
}; // CISCOPROCESSMIB::Cpmcpuprocesshistorytable


class CISCOPROCESSMIB::Cpmcpuprocesshistorytable::Cpmcpuprocesshistoryentry : public ydk::Entity
{
    public:
        Cpmcpuprocesshistoryentry();
        ~Cpmcpuprocesshistoryentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcpuhistorytable::Cpmcpuhistoryentry::cpmcpuhistoryreportid)
        ydk::YLeaf cpmcpuhistoryreportid;
        ydk::YLeaf cpmcpuprocesshistoryindex; //type: uint32
        ydk::YLeaf cpmcpuhistoryprocid; //type: uint32
        ydk::YLeaf cpmcpuhistoryprocname; //type: string
        ydk::YLeaf cpmcpuhistoryproccreated; //type: uint32
        ydk::YLeaf cpmcpuhistoryprocutil; //type: uint32

}; // CISCOPROCESSMIB::Cpmcpuprocesshistorytable::Cpmcpuprocesshistoryentry


class CISCOPROCESSMIB::Cpmcputhresholdtable : public ydk::Entity
{
    public:
        Cpmcputhresholdtable();
        ~Cpmcputhresholdtable();

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

        class Cpmcputhresholdentry; //type: CISCOPROCESSMIB::Cpmcputhresholdtable::Cpmcputhresholdentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputhresholdtable::Cpmcputhresholdentry> > cpmcputhresholdentry;
        
}; // CISCOPROCESSMIB::Cpmcputhresholdtable


class CISCOPROCESSMIB::Cpmcputhresholdtable::Cpmcputhresholdentry : public ydk::Entity
{
    public:
        Cpmcputhresholdentry();
        ~Cpmcputhresholdentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmcputhresholdclass; //type: Cpmcputhresholdclass
        ydk::YLeaf cpmcpurisingthresholdvalue; //type: uint32
        ydk::YLeaf cpmcpurisingthresholdperiod; //type: uint32
        ydk::YLeaf cpmcpufallingthresholdvalue; //type: uint32
        ydk::YLeaf cpmcpufallingthresholdperiod; //type: uint32
        ydk::YLeaf cpmcputhresholdentrystatus; //type: RowStatus
        class Cpmcputhresholdclass;

}; // CISCOPROCESSMIB::Cpmcputhresholdtable::Cpmcputhresholdentry


class CISCOPROCESSMIB::Cpmcputotaltable : public ydk::Entity
{
    public:
        Cpmcputotaltable();
        ~Cpmcputotaltable();

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

        class Cpmcputotalentry; //type: CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry> > cpmcputotalentry;
        
}; // CISCOPROCESSMIB::Cpmcputotaltable


class CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry : public ydk::Entity
{
    public:
        Cpmcputotalentry();
        ~Cpmcputotalentry();

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

        ydk::YLeaf cpmcputotalindex; //type: uint32
        ydk::YLeaf cpmcputotalphysicalindex; //type: int32
        ydk::YLeaf cpmcputotal5sec; //type: uint32
        ydk::YLeaf cpmcputotal1min; //type: uint32
        ydk::YLeaf cpmcputotal5min; //type: uint32
        ydk::YLeaf cpmcputotal5secrev; //type: uint32
        ydk::YLeaf cpmcputotal1minrev; //type: uint32
        ydk::YLeaf cpmcputotal5minrev; //type: uint32
        ydk::YLeaf cpmcpumoninterval; //type: uint32
        ydk::YLeaf cpmcputotalmonintervalvalue; //type: uint32
        ydk::YLeaf cpmcpuinterruptmonintervalvalue; //type: uint32
        ydk::YLeaf cpmcpumemoryused; //type: uint32
        ydk::YLeaf cpmcpumemoryfree; //type: uint32
        ydk::YLeaf cpmcpumemorykernelreserved; //type: uint32
        ydk::YLeaf cpmcpumemorylowest; //type: uint32
        ydk::YLeaf cpmcpumemoryusedovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhcused; //type: uint64
        ydk::YLeaf cpmcpumemoryfreeovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhcfree; //type: uint64
        ydk::YLeaf cpmcpumemorykernelreservedovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhckernelreserved; //type: uint64
        ydk::YLeaf cpmcpumemorylowestovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhclowest; //type: uint64
        ydk::YLeaf cpmcpuloadavg1min; //type: uint32
        ydk::YLeaf cpmcpuloadavg5min; //type: uint32
        ydk::YLeaf cpmcpuloadavg15min; //type: uint32
        ydk::YLeaf cpmcpumemorycommitted; //type: uint32
        ydk::YLeaf cpmcpumemorycommittedovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhccommitted; //type: uint64

}; // CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry


class CISCOPROCESSMIB::Cpmprocessextrevtable : public ydk::Entity
{
    public:
        Cpmprocessextrevtable();
        ~Cpmprocessextrevtable();

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

        class Cpmprocessextreventry; //type: CISCOPROCESSMIB::Cpmprocessextrevtable::Cpmprocessextreventry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmprocessextrevtable::Cpmprocessextreventry> > cpmprocessextreventry;
        
}; // CISCOPROCESSMIB::Cpmprocessextrevtable


class CISCOPROCESSMIB::Cpmprocessextrevtable::Cpmprocessextreventry : public ydk::Entity
{
    public:
        Cpmprocessextreventry();
        ~Cpmprocessextreventry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmprocesstable::Cpmprocessentry::cpmprocesspid)
        ydk::YLeaf cpmprocesspid;
        ydk::YLeaf cpmprocextmemallocatedrev; //type: uint32
        ydk::YLeaf cpmprocextmemfreedrev; //type: uint32
        ydk::YLeaf cpmprocextinvokedrev; //type: uint32
        ydk::YLeaf cpmprocextruntimerev; //type: uint32
        ydk::YLeaf cpmprocextutil5secrev; //type: uint32
        ydk::YLeaf cpmprocextutil1minrev; //type: uint32
        ydk::YLeaf cpmprocextutil5minrev; //type: uint32
        ydk::YLeaf cpmprocextpriorityrev; //type: Cpmprocextpriorityrev
        ydk::YLeaf cpmprocesstype; //type: Cpmprocesstype
        ydk::YLeaf cpmprocessrespawn; //type: uint32
        ydk::YLeaf cpmprocessrespawncount; //type: uint32
        ydk::YLeaf cpmprocessrespawnafterlastpatch; //type: uint32
        ydk::YLeaf cpmprocessmemorycore; //type: Cpmprocessmemorycore
        ydk::YLeaf cpmprocesslastrestartuser; //type: string
        ydk::YLeaf cpmprocesstextsegmentsize; //type: uint32
        ydk::YLeaf cpmprocessdatasegmentsize; //type: uint32
        ydk::YLeaf cpmprocessstacksize; //type: uint32
        ydk::YLeaf cpmprocessdynamicmemorysize; //type: uint32
        ydk::YLeaf cpmprocextmemallocatedrevovrflw; //type: uint32
        ydk::YLeaf cpmprocexthcmemallocatedrev; //type: uint64
        ydk::YLeaf cpmprocextmemfreedrevovrflw; //type: uint32
        ydk::YLeaf cpmprocexthcmemfreedrev; //type: uint64
        ydk::YLeaf cpmprocesstextsegmentsizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshctextsegmentsize; //type: uint64
        ydk::YLeaf cpmprocessdatasegmentsizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshcdatasegmentsize; //type: uint64
        ydk::YLeaf cpmprocessstacksizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshcstacksize; //type: uint64
        ydk::YLeaf cpmprocessdynamicmemorysizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshcdynamicmemorysize; //type: uint64
        class Cpmprocextpriorityrev;
        class Cpmprocesstype;
        class Cpmprocessmemorycore;

}; // CISCOPROCESSMIB::Cpmprocessextrevtable::Cpmprocessextreventry


class CISCOPROCESSMIB::Cpmprocesstable : public ydk::Entity
{
    public:
        Cpmprocesstable();
        ~Cpmprocesstable();

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

        class Cpmprocessentry; //type: CISCOPROCESSMIB::Cpmprocesstable::Cpmprocessentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmprocesstable::Cpmprocessentry> > cpmprocessentry;
        
}; // CISCOPROCESSMIB::Cpmprocesstable


class CISCOPROCESSMIB::Cpmprocesstable::Cpmprocessentry : public ydk::Entity
{
    public:
        Cpmprocessentry();
        ~Cpmprocessentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmprocesspid; //type: uint32
        ydk::YLeaf cpmprocessname; //type: string
        ydk::YLeaf cpmprocessusecs; //type: uint32
        ydk::YLeaf cpmprocesstimecreated; //type: uint32
        ydk::YLeaf cpmprocessaverageusecs; //type: uint32
        ydk::YLeaf cpmprocextmemallocated; //type: uint32
        ydk::YLeaf cpmprocextmemfreed; //type: uint32
        ydk::YLeaf cpmprocextinvoked; //type: uint32
        ydk::YLeaf cpmprocextruntime; //type: uint32
        ydk::YLeaf cpmprocextutil5sec; //type: uint32
        ydk::YLeaf cpmprocextutil1min; //type: uint32
        ydk::YLeaf cpmprocextutil5min; //type: uint32
        ydk::YLeaf cpmprocextpriority; //type: Cpmprocextpriority
        class Cpmprocextpriority;

}; // CISCOPROCESSMIB::Cpmprocesstable::Cpmprocessentry


class CISCOPROCESSMIB::Cpmthreadtable : public ydk::Entity
{
    public:
        Cpmthreadtable();
        ~Cpmthreadtable();

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

        class Cpmthreadentry; //type: CISCOPROCESSMIB::Cpmthreadtable::Cpmthreadentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmthreadtable::Cpmthreadentry> > cpmthreadentry;
        
}; // CISCOPROCESSMIB::Cpmthreadtable


class CISCOPROCESSMIB::Cpmthreadtable::Cpmthreadentry : public ydk::Entity
{
    public:
        Cpmthreadentry();
        ~Cpmthreadentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmprocesstable::Cpmprocessentry::cpmprocesspid)
        ydk::YLeaf cpmprocesspid;
        ydk::YLeaf cpmthreadid; //type: uint32
        ydk::YLeaf cpmthreadname; //type: string
        ydk::YLeaf cpmthreadpriority; //type: uint32
        ydk::YLeaf cpmthreadstate; //type: Cpmthreadstate
        ydk::YLeaf cpmthreadblockingprocess; //type: string
        ydk::YLeaf cpmthreadcpuutilization; //type: uint32
        ydk::YLeaf cpmthreadstacksize; //type: uint32
        ydk::YLeaf cpmthreadstacksizeovrflw; //type: uint32
        ydk::YLeaf cpmthreadhcstacksize; //type: uint64
        class Cpmthreadstate;

}; // CISCOPROCESSMIB::Cpmthreadtable::Cpmthreadentry


class CISCOPROCESSMIB::Cpmvirtualprocesstable : public ydk::Entity
{
    public:
        Cpmvirtualprocesstable();
        ~Cpmvirtualprocesstable();

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

        class Cpmvirtualprocessentry; //type: CISCOPROCESSMIB::Cpmvirtualprocesstable::Cpmvirtualprocessentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmvirtualprocesstable::Cpmvirtualprocessentry> > cpmvirtualprocessentry;
        
}; // CISCOPROCESSMIB::Cpmvirtualprocesstable


class CISCOPROCESSMIB::Cpmvirtualprocesstable::Cpmvirtualprocessentry : public ydk::Entity
{
    public:
        Cpmvirtualprocessentry();
        ~Cpmvirtualprocessentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmcputotaltable::Cpmcputotalentry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::Cpmprocesstable::Cpmprocessentry::cpmprocesspid)
        ydk::YLeaf cpmprocesspid;
        ydk::YLeaf cpmvirtualprocessid; //type: uint32
        ydk::YLeaf cpmvirtualprocessname; //type: string
        ydk::YLeaf cpmvirtualprocessutil5sec; //type: uint32
        ydk::YLeaf cpmvirtualprocessutil1min; //type: uint32
        ydk::YLeaf cpmvirtualprocessutil5min; //type: uint32
        ydk::YLeaf cpmvirtualprocessmemallocated; //type: uint32
        ydk::YLeaf cpmvirtualprocessmemfreed; //type: uint32
        ydk::YLeaf cpmvirtualprocessinvokecount; //type: uint32
        ydk::YLeaf cpmvirtualprocessruntime; //type: uint32
        ydk::YLeaf cpmvirtualprocessmemallocatedovrflw; //type: uint32
        ydk::YLeaf cpmvirtualprocesshcmemallocated; //type: uint64
        ydk::YLeaf cpmvirtualprocessmemfreedovrflw; //type: uint32
        ydk::YLeaf cpmvirtualprocesshcmemfreed; //type: uint64

}; // CISCOPROCESSMIB::Cpmvirtualprocesstable::Cpmvirtualprocessentry

class CISCOPROCESSMIB::Cpmcputhresholdtable::Cpmcputhresholdentry::Cpmcputhresholdclass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf total;
        static const ydk::Enum::YLeaf interrupt;
        static const ydk::Enum::YLeaf process;

};

class CISCOPROCESSMIB::Cpmprocessextrevtable::Cpmprocessextreventry::Cpmprocextpriorityrev : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf notAssigned;

};

class CISCOPROCESSMIB::Cpmprocessextrevtable::Cpmprocessextreventry::Cpmprocesstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf posix;
        static const ydk::Enum::YLeaf ios;

};

class CISCOPROCESSMIB::Cpmprocessextrevtable::Cpmprocessextreventry::Cpmprocessmemorycore : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf mainmem;
        static const ydk::Enum::YLeaf mainmemSharedmem;
        static const ydk::Enum::YLeaf mainmemText;
        static const ydk::Enum::YLeaf mainmemTextSharedmem;
        static const ydk::Enum::YLeaf sharedmem;
        static const ydk::Enum::YLeaf sparse;
        static const ydk::Enum::YLeaf off;

};

class CISCOPROCESSMIB::Cpmprocesstable::Cpmprocessentry::Cpmprocextpriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf notAssigned;

};

class CISCOPROCESSMIB::Cpmthreadtable::Cpmthreadentry::Cpmthreadstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf dead;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf stopped;
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf reply;
        static const ydk::Enum::YLeaf stack;
        static const ydk::Enum::YLeaf waitpage;
        static const ydk::Enum::YLeaf sigsuspend;
        static const ydk::Enum::YLeaf sigwaitinfo;
        static const ydk::Enum::YLeaf nanosleep;
        static const ydk::Enum::YLeaf mutex;
        static const ydk::Enum::YLeaf condvar;
        static const ydk::Enum::YLeaf join;
        static const ydk::Enum::YLeaf intr;
        static const ydk::Enum::YLeaf sem;

};


}
}

#endif /* _CISCO_PROCESS_MIB_ */

