#ifndef _TCP_MIB_
#define _TCP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace TCP_MIB {

class TCPMIB : public ydk::Entity
{
    public:
        TCPMIB();
        ~TCPMIB();

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

        class Tcp; //type: TCPMIB::Tcp
        class TcpConnTable; //type: TCPMIB::TcpConnTable
        class TcpConnectionTable; //type: TCPMIB::TcpConnectionTable
        class TcpListenerTable; //type: TCPMIB::TcpListenerTable

        std::shared_ptr<cisco_ios_xe::TCP_MIB::TCPMIB::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::TCP_MIB::TCPMIB::TcpConnTable> tcpconntable;
        std::shared_ptr<cisco_ios_xe::TCP_MIB::TCPMIB::TcpConnectionTable> tcpconnectiontable;
        std::shared_ptr<cisco_ios_xe::TCP_MIB::TCPMIB::TcpListenerTable> tcplistenertable;
        
}; // TCPMIB


class TCPMIB::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

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

        ydk::YLeaf tcprtoalgorithm; //type: TcpRtoAlgorithm
        ydk::YLeaf tcprtomin; //type: int32
        ydk::YLeaf tcprtomax; //type: int32
        ydk::YLeaf tcpmaxconn; //type: int32
        ydk::YLeaf tcpactiveopens; //type: uint32
        ydk::YLeaf tcppassiveopens; //type: uint32
        ydk::YLeaf tcpattemptfails; //type: uint32
        ydk::YLeaf tcpestabresets; //type: uint32
        ydk::YLeaf tcpcurrestab; //type: uint32
        ydk::YLeaf tcpinsegs; //type: uint32
        ydk::YLeaf tcpoutsegs; //type: uint32
        ydk::YLeaf tcpretranssegs; //type: uint32
        ydk::YLeaf tcpinerrs; //type: uint32
        ydk::YLeaf tcpoutrsts; //type: uint32
        ydk::YLeaf tcphcinsegs; //type: uint64
        ydk::YLeaf tcphcoutsegs; //type: uint64
        class TcpRtoAlgorithm;

}; // TCPMIB::Tcp


class TCPMIB::TcpConnTable : public ydk::Entity
{
    public:
        TcpConnTable();
        ~TcpConnTable();

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

        class TcpConnEntry; //type: TCPMIB::TcpConnTable::TcpConnEntry

        ydk::YList tcpconnentry;
        
}; // TCPMIB::TcpConnTable


class TCPMIB::TcpConnTable::TcpConnEntry : public ydk::Entity
{
    public:
        TcpConnEntry();
        ~TcpConnEntry();

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

        ydk::YLeaf tcpconnlocaladdress; //type: string
        ydk::YLeaf tcpconnlocalport; //type: int32
        ydk::YLeaf tcpconnremaddress; //type: string
        ydk::YLeaf tcpconnremport; //type: int32
        ydk::YLeaf tcpconnstate; //type: TcpConnState
        class TcpConnState;

}; // TCPMIB::TcpConnTable::TcpConnEntry


class TCPMIB::TcpConnectionTable : public ydk::Entity
{
    public:
        TcpConnectionTable();
        ~TcpConnectionTable();

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

        class TcpConnectionEntry; //type: TCPMIB::TcpConnectionTable::TcpConnectionEntry

        ydk::YList tcpconnectionentry;
        
}; // TCPMIB::TcpConnectionTable


class TCPMIB::TcpConnectionTable::TcpConnectionEntry : public ydk::Entity
{
    public:
        TcpConnectionEntry();
        ~TcpConnectionEntry();

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

        ydk::YLeaf tcpconnectionlocaladdresstype; //type: InetAddressType
        ydk::YLeaf tcpconnectionlocaladdress; //type: binary
        ydk::YLeaf tcpconnectionlocalport; //type: uint16
        ydk::YLeaf tcpconnectionremaddresstype; //type: InetAddressType
        ydk::YLeaf tcpconnectionremaddress; //type: binary
        ydk::YLeaf tcpconnectionremport; //type: uint16
        ydk::YLeaf tcpconnectionstate; //type: TcpConnectionState
        ydk::YLeaf tcpconnectionprocess; //type: uint32
        class TcpConnectionState;

}; // TCPMIB::TcpConnectionTable::TcpConnectionEntry


class TCPMIB::TcpListenerTable : public ydk::Entity
{
    public:
        TcpListenerTable();
        ~TcpListenerTable();

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

        class TcpListenerEntry; //type: TCPMIB::TcpListenerTable::TcpListenerEntry

        ydk::YList tcplistenerentry;
        
}; // TCPMIB::TcpListenerTable


class TCPMIB::TcpListenerTable::TcpListenerEntry : public ydk::Entity
{
    public:
        TcpListenerEntry();
        ~TcpListenerEntry();

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

        ydk::YLeaf tcplistenerlocaladdresstype; //type: InetAddressType
        ydk::YLeaf tcplistenerlocaladdress; //type: binary
        ydk::YLeaf tcplistenerlocalport; //type: uint16
        ydk::YLeaf tcplistenerprocess; //type: uint32

}; // TCPMIB::TcpListenerTable::TcpListenerEntry

class TCPMIB::Tcp::TcpRtoAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf constant;
        static const ydk::Enum::YLeaf rsre;
        static const ydk::Enum::YLeaf vanj;
        static const ydk::Enum::YLeaf rfc2988;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "constant") return 2;
            if (name == "rsre") return 3;
            if (name == "vanj") return 4;
            if (name == "rfc2988") return 5;
            return -1;
        }
};

class TCPMIB::TcpConnTable::TcpConnEntry::TcpConnState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf synSent;
        static const ydk::Enum::YLeaf synReceived;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf finWait1;
        static const ydk::Enum::YLeaf finWait2;
        static const ydk::Enum::YLeaf closeWait;
        static const ydk::Enum::YLeaf lastAck;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf timeWait;
        static const ydk::Enum::YLeaf deleteTCB;

        static int get_enum_value(const std::string & name) {
            if (name == "closed") return 1;
            if (name == "listen") return 2;
            if (name == "synSent") return 3;
            if (name == "synReceived") return 4;
            if (name == "established") return 5;
            if (name == "finWait1") return 6;
            if (name == "finWait2") return 7;
            if (name == "closeWait") return 8;
            if (name == "lastAck") return 9;
            if (name == "closing") return 10;
            if (name == "timeWait") return 11;
            if (name == "deleteTCB") return 12;
            return -1;
        }
};

class TCPMIB::TcpConnectionTable::TcpConnectionEntry::TcpConnectionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf synSent;
        static const ydk::Enum::YLeaf synReceived;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf finWait1;
        static const ydk::Enum::YLeaf finWait2;
        static const ydk::Enum::YLeaf closeWait;
        static const ydk::Enum::YLeaf lastAck;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf timeWait;
        static const ydk::Enum::YLeaf deleteTCB;

        static int get_enum_value(const std::string & name) {
            if (name == "closed") return 1;
            if (name == "listen") return 2;
            if (name == "synSent") return 3;
            if (name == "synReceived") return 4;
            if (name == "established") return 5;
            if (name == "finWait1") return 6;
            if (name == "finWait2") return 7;
            if (name == "closeWait") return 8;
            if (name == "lastAck") return 9;
            if (name == "closing") return 10;
            if (name == "timeWait") return 11;
            if (name == "deleteTCB") return 12;
            return -1;
        }
};


}
}

#endif /* _TCP_MIB_ */

