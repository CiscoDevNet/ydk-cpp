
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "TCP_MIB.hpp"

namespace ydk {
namespace TCP_MIB {

TcpMib::TcpMib()
    :
    tcp(std::make_shared<TcpMib::Tcp>())
	,tcpconnectiontable(std::make_shared<TcpMib::Tcpconnectiontable>())
	,tcpconntable(std::make_shared<TcpMib::Tcpconntable>())
	,tcplistenertable(std::make_shared<TcpMib::Tcplistenertable>())
{
    tcp->parent = this;

    tcpconnectiontable->parent = this;

    tcpconntable->parent = this;

    tcplistenertable->parent = this;

    yang_name = "TCP-MIB"; yang_parent_name = "TCP-MIB";
}

TcpMib::~TcpMib()
{
}

bool TcpMib::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data())
	|| (tcpconnectiontable !=  nullptr && tcpconnectiontable->has_data())
	|| (tcpconntable !=  nullptr && tcpconntable->has_data())
	|| (tcplistenertable !=  nullptr && tcplistenertable->has_data());
}

bool TcpMib::has_operation() const
{
    return is_set(operation)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (tcpconnectiontable !=  nullptr && tcpconnectiontable->has_operation())
	|| (tcpconntable !=  nullptr && tcpconntable->has_operation())
	|| (tcplistenertable !=  nullptr && tcplistenertable->has_operation());
}

std::string TcpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCP-MIB:TCP-MIB";

    return path_buffer.str();

}

const EntityPath TcpMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TcpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<TcpMib::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "tcpConnectionTable")
    {
        if(tcpconnectiontable == nullptr)
        {
            tcpconnectiontable = std::make_shared<TcpMib::Tcpconnectiontable>();
        }
        return tcpconnectiontable;
    }

    if(child_yang_name == "tcpConnTable")
    {
        if(tcpconntable == nullptr)
        {
            tcpconntable = std::make_shared<TcpMib::Tcpconntable>();
        }
        return tcpconntable;
    }

    if(child_yang_name == "tcpListenerTable")
    {
        if(tcplistenertable == nullptr)
        {
            tcplistenertable = std::make_shared<TcpMib::Tcplistenertable>();
        }
        return tcplistenertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(tcpconnectiontable != nullptr)
    {
        children["tcpConnectionTable"] = tcpconnectiontable;
    }

    if(tcpconntable != nullptr)
    {
        children["tcpConnTable"] = tcpconntable;
    }

    if(tcplistenertable != nullptr)
    {
        children["tcpListenerTable"] = tcplistenertable;
    }

    return children;
}

void TcpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> TcpMib::clone_ptr() const
{
    return std::make_shared<TcpMib>();
}

std::string TcpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TcpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TcpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

TcpMib::Tcp::Tcp()
    :
    tcpactiveopens{YType::uint32, "tcpActiveOpens"},
    tcpattemptfails{YType::uint32, "tcpAttemptFails"},
    tcpcurrestab{YType::uint32, "tcpCurrEstab"},
    tcpestabresets{YType::uint32, "tcpEstabResets"},
    tcphcinsegs{YType::uint64, "tcpHCInSegs"},
    tcphcoutsegs{YType::uint64, "tcpHCOutSegs"},
    tcpinerrs{YType::uint32, "tcpInErrs"},
    tcpinsegs{YType::uint32, "tcpInSegs"},
    tcpmaxconn{YType::int32, "tcpMaxConn"},
    tcpoutrsts{YType::uint32, "tcpOutRsts"},
    tcpoutsegs{YType::uint32, "tcpOutSegs"},
    tcppassiveopens{YType::uint32, "tcpPassiveOpens"},
    tcpretranssegs{YType::uint32, "tcpRetransSegs"},
    tcprtoalgorithm{YType::enumeration, "tcpRtoAlgorithm"},
    tcprtomax{YType::int32, "tcpRtoMax"},
    tcprtomin{YType::int32, "tcpRtoMin"}
{
    yang_name = "tcp"; yang_parent_name = "TCP-MIB";
}

TcpMib::Tcp::~Tcp()
{
}

bool TcpMib::Tcp::has_data() const
{
    return tcpactiveopens.is_set
	|| tcpattemptfails.is_set
	|| tcpcurrestab.is_set
	|| tcpestabresets.is_set
	|| tcphcinsegs.is_set
	|| tcphcoutsegs.is_set
	|| tcpinerrs.is_set
	|| tcpinsegs.is_set
	|| tcpmaxconn.is_set
	|| tcpoutrsts.is_set
	|| tcpoutsegs.is_set
	|| tcppassiveopens.is_set
	|| tcpretranssegs.is_set
	|| tcprtoalgorithm.is_set
	|| tcprtomax.is_set
	|| tcprtomin.is_set;
}

bool TcpMib::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(tcpactiveopens.operation)
	|| is_set(tcpattemptfails.operation)
	|| is_set(tcpcurrestab.operation)
	|| is_set(tcpestabresets.operation)
	|| is_set(tcphcinsegs.operation)
	|| is_set(tcphcoutsegs.operation)
	|| is_set(tcpinerrs.operation)
	|| is_set(tcpinsegs.operation)
	|| is_set(tcpmaxconn.operation)
	|| is_set(tcpoutrsts.operation)
	|| is_set(tcpoutsegs.operation)
	|| is_set(tcppassiveopens.operation)
	|| is_set(tcpretranssegs.operation)
	|| is_set(tcprtoalgorithm.operation)
	|| is_set(tcprtomax.operation)
	|| is_set(tcprtomin.operation);
}

std::string TcpMib::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath TcpMib::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TCP-MIB:TCP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpactiveopens.is_set || is_set(tcpactiveopens.operation)) leaf_name_data.push_back(tcpactiveopens.get_name_leafdata());
    if (tcpattemptfails.is_set || is_set(tcpattemptfails.operation)) leaf_name_data.push_back(tcpattemptfails.get_name_leafdata());
    if (tcpcurrestab.is_set || is_set(tcpcurrestab.operation)) leaf_name_data.push_back(tcpcurrestab.get_name_leafdata());
    if (tcpestabresets.is_set || is_set(tcpestabresets.operation)) leaf_name_data.push_back(tcpestabresets.get_name_leafdata());
    if (tcphcinsegs.is_set || is_set(tcphcinsegs.operation)) leaf_name_data.push_back(tcphcinsegs.get_name_leafdata());
    if (tcphcoutsegs.is_set || is_set(tcphcoutsegs.operation)) leaf_name_data.push_back(tcphcoutsegs.get_name_leafdata());
    if (tcpinerrs.is_set || is_set(tcpinerrs.operation)) leaf_name_data.push_back(tcpinerrs.get_name_leafdata());
    if (tcpinsegs.is_set || is_set(tcpinsegs.operation)) leaf_name_data.push_back(tcpinsegs.get_name_leafdata());
    if (tcpmaxconn.is_set || is_set(tcpmaxconn.operation)) leaf_name_data.push_back(tcpmaxconn.get_name_leafdata());
    if (tcpoutrsts.is_set || is_set(tcpoutrsts.operation)) leaf_name_data.push_back(tcpoutrsts.get_name_leafdata());
    if (tcpoutsegs.is_set || is_set(tcpoutsegs.operation)) leaf_name_data.push_back(tcpoutsegs.get_name_leafdata());
    if (tcppassiveopens.is_set || is_set(tcppassiveopens.operation)) leaf_name_data.push_back(tcppassiveopens.get_name_leafdata());
    if (tcpretranssegs.is_set || is_set(tcpretranssegs.operation)) leaf_name_data.push_back(tcpretranssegs.get_name_leafdata());
    if (tcprtoalgorithm.is_set || is_set(tcprtoalgorithm.operation)) leaf_name_data.push_back(tcprtoalgorithm.get_name_leafdata());
    if (tcprtomax.is_set || is_set(tcprtomax.operation)) leaf_name_data.push_back(tcprtomax.get_name_leafdata());
    if (tcprtomin.is_set || is_set(tcprtomin.operation)) leaf_name_data.push_back(tcprtomin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TcpMib::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpMib::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpMib::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcpActiveOpens")
    {
        tcpactiveopens = value;
    }
    if(value_path == "tcpAttemptFails")
    {
        tcpattemptfails = value;
    }
    if(value_path == "tcpCurrEstab")
    {
        tcpcurrestab = value;
    }
    if(value_path == "tcpEstabResets")
    {
        tcpestabresets = value;
    }
    if(value_path == "tcpHCInSegs")
    {
        tcphcinsegs = value;
    }
    if(value_path == "tcpHCOutSegs")
    {
        tcphcoutsegs = value;
    }
    if(value_path == "tcpInErrs")
    {
        tcpinerrs = value;
    }
    if(value_path == "tcpInSegs")
    {
        tcpinsegs = value;
    }
    if(value_path == "tcpMaxConn")
    {
        tcpmaxconn = value;
    }
    if(value_path == "tcpOutRsts")
    {
        tcpoutrsts = value;
    }
    if(value_path == "tcpOutSegs")
    {
        tcpoutsegs = value;
    }
    if(value_path == "tcpPassiveOpens")
    {
        tcppassiveopens = value;
    }
    if(value_path == "tcpRetransSegs")
    {
        tcpretranssegs = value;
    }
    if(value_path == "tcpRtoAlgorithm")
    {
        tcprtoalgorithm = value;
    }
    if(value_path == "tcpRtoMax")
    {
        tcprtomax = value;
    }
    if(value_path == "tcpRtoMin")
    {
        tcprtomin = value;
    }
}

TcpMib::Tcpconntable::Tcpconntable()
{
    yang_name = "tcpConnTable"; yang_parent_name = "TCP-MIB";
}

TcpMib::Tcpconntable::~Tcpconntable()
{
}

bool TcpMib::Tcpconntable::has_data() const
{
    for (std::size_t index=0; index<tcpconnentry.size(); index++)
    {
        if(tcpconnentry[index]->has_data())
            return true;
    }
    return false;
}

bool TcpMib::Tcpconntable::has_operation() const
{
    for (std::size_t index=0; index<tcpconnentry.size(); index++)
    {
        if(tcpconnentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpMib::Tcpconntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnTable";

    return path_buffer.str();

}

const EntityPath TcpMib::Tcpconntable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TCP-MIB:TCP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TcpMib::Tcpconntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcpConnEntry")
    {
        for(auto const & c : tcpconnentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpMib::Tcpconntable::Tcpconnentry>();
        c->parent = this;
        tcpconnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpMib::Tcpconntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tcpconnentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpMib::Tcpconntable::set_value(const std::string & value_path, std::string value)
{
}

TcpMib::Tcpconntable::Tcpconnentry::Tcpconnentry()
    :
    tcpconnlocaladdress{YType::str, "tcpConnLocalAddress"},
    tcpconnlocalport{YType::int32, "tcpConnLocalPort"},
    tcpconnremaddress{YType::str, "tcpConnRemAddress"},
    tcpconnremport{YType::int32, "tcpConnRemPort"},
    tcpconnstate{YType::enumeration, "tcpConnState"}
{
    yang_name = "tcpConnEntry"; yang_parent_name = "tcpConnTable";
}

TcpMib::Tcpconntable::Tcpconnentry::~Tcpconnentry()
{
}

bool TcpMib::Tcpconntable::Tcpconnentry::has_data() const
{
    return tcpconnlocaladdress.is_set
	|| tcpconnlocalport.is_set
	|| tcpconnremaddress.is_set
	|| tcpconnremport.is_set
	|| tcpconnstate.is_set;
}

bool TcpMib::Tcpconntable::Tcpconnentry::has_operation() const
{
    return is_set(operation)
	|| is_set(tcpconnlocaladdress.operation)
	|| is_set(tcpconnlocalport.operation)
	|| is_set(tcpconnremaddress.operation)
	|| is_set(tcpconnremport.operation)
	|| is_set(tcpconnstate.operation);
}

std::string TcpMib::Tcpconntable::Tcpconnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnEntry" <<"[tcpConnLocalAddress='" <<tcpconnlocaladdress <<"']" <<"[tcpConnLocalPort='" <<tcpconnlocalport <<"']" <<"[tcpConnRemAddress='" <<tcpconnremaddress <<"']" <<"[tcpConnRemPort='" <<tcpconnremport <<"']";

    return path_buffer.str();

}

const EntityPath TcpMib::Tcpconntable::Tcpconnentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TCP-MIB:TCP-MIB/tcpConnTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpconnlocaladdress.is_set || is_set(tcpconnlocaladdress.operation)) leaf_name_data.push_back(tcpconnlocaladdress.get_name_leafdata());
    if (tcpconnlocalport.is_set || is_set(tcpconnlocalport.operation)) leaf_name_data.push_back(tcpconnlocalport.get_name_leafdata());
    if (tcpconnremaddress.is_set || is_set(tcpconnremaddress.operation)) leaf_name_data.push_back(tcpconnremaddress.get_name_leafdata());
    if (tcpconnremport.is_set || is_set(tcpconnremport.operation)) leaf_name_data.push_back(tcpconnremport.get_name_leafdata());
    if (tcpconnstate.is_set || is_set(tcpconnstate.operation)) leaf_name_data.push_back(tcpconnstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TcpMib::Tcpconntable::Tcpconnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpMib::Tcpconntable::Tcpconnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpMib::Tcpconntable::Tcpconnentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcpConnLocalAddress")
    {
        tcpconnlocaladdress = value;
    }
    if(value_path == "tcpConnLocalPort")
    {
        tcpconnlocalport = value;
    }
    if(value_path == "tcpConnRemAddress")
    {
        tcpconnremaddress = value;
    }
    if(value_path == "tcpConnRemPort")
    {
        tcpconnremport = value;
    }
    if(value_path == "tcpConnState")
    {
        tcpconnstate = value;
    }
}

TcpMib::Tcpconnectiontable::Tcpconnectiontable()
{
    yang_name = "tcpConnectionTable"; yang_parent_name = "TCP-MIB";
}

TcpMib::Tcpconnectiontable::~Tcpconnectiontable()
{
}

bool TcpMib::Tcpconnectiontable::has_data() const
{
    for (std::size_t index=0; index<tcpconnectionentry.size(); index++)
    {
        if(tcpconnectionentry[index]->has_data())
            return true;
    }
    return false;
}

bool TcpMib::Tcpconnectiontable::has_operation() const
{
    for (std::size_t index=0; index<tcpconnectionentry.size(); index++)
    {
        if(tcpconnectionentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpMib::Tcpconnectiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnectionTable";

    return path_buffer.str();

}

const EntityPath TcpMib::Tcpconnectiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TCP-MIB:TCP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TcpMib::Tcpconnectiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcpConnectionEntry")
    {
        for(auto const & c : tcpconnectionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpMib::Tcpconnectiontable::Tcpconnectionentry>();
        c->parent = this;
        tcpconnectionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpMib::Tcpconnectiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tcpconnectionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpMib::Tcpconnectiontable::set_value(const std::string & value_path, std::string value)
{
}

TcpMib::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionentry()
    :
    tcpconnectionlocaladdresstype{YType::enumeration, "tcpConnectionLocalAddressType"},
    tcpconnectionlocaladdress{YType::str, "tcpConnectionLocalAddress"},
    tcpconnectionlocalport{YType::uint16, "tcpConnectionLocalPort"},
    tcpconnectionremaddresstype{YType::enumeration, "tcpConnectionRemAddressType"},
    tcpconnectionremaddress{YType::str, "tcpConnectionRemAddress"},
    tcpconnectionremport{YType::uint16, "tcpConnectionRemPort"},
    tcpconnectionprocess{YType::uint32, "tcpConnectionProcess"},
    tcpconnectionstate{YType::enumeration, "tcpConnectionState"}
{
    yang_name = "tcpConnectionEntry"; yang_parent_name = "tcpConnectionTable";
}

TcpMib::Tcpconnectiontable::Tcpconnectionentry::~Tcpconnectionentry()
{
}

bool TcpMib::Tcpconnectiontable::Tcpconnectionentry::has_data() const
{
    return tcpconnectionlocaladdresstype.is_set
	|| tcpconnectionlocaladdress.is_set
	|| tcpconnectionlocalport.is_set
	|| tcpconnectionremaddresstype.is_set
	|| tcpconnectionremaddress.is_set
	|| tcpconnectionremport.is_set
	|| tcpconnectionprocess.is_set
	|| tcpconnectionstate.is_set;
}

bool TcpMib::Tcpconnectiontable::Tcpconnectionentry::has_operation() const
{
    return is_set(operation)
	|| is_set(tcpconnectionlocaladdresstype.operation)
	|| is_set(tcpconnectionlocaladdress.operation)
	|| is_set(tcpconnectionlocalport.operation)
	|| is_set(tcpconnectionremaddresstype.operation)
	|| is_set(tcpconnectionremaddress.operation)
	|| is_set(tcpconnectionremport.operation)
	|| is_set(tcpconnectionprocess.operation)
	|| is_set(tcpconnectionstate.operation);
}

std::string TcpMib::Tcpconnectiontable::Tcpconnectionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnectionEntry" <<"[tcpConnectionLocalAddressType='" <<tcpconnectionlocaladdresstype <<"']" <<"[tcpConnectionLocalAddress='" <<tcpconnectionlocaladdress <<"']" <<"[tcpConnectionLocalPort='" <<tcpconnectionlocalport <<"']" <<"[tcpConnectionRemAddressType='" <<tcpconnectionremaddresstype <<"']" <<"[tcpConnectionRemAddress='" <<tcpconnectionremaddress <<"']" <<"[tcpConnectionRemPort='" <<tcpconnectionremport <<"']";

    return path_buffer.str();

}

const EntityPath TcpMib::Tcpconnectiontable::Tcpconnectionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TCP-MIB:TCP-MIB/tcpConnectionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpconnectionlocaladdresstype.is_set || is_set(tcpconnectionlocaladdresstype.operation)) leaf_name_data.push_back(tcpconnectionlocaladdresstype.get_name_leafdata());
    if (tcpconnectionlocaladdress.is_set || is_set(tcpconnectionlocaladdress.operation)) leaf_name_data.push_back(tcpconnectionlocaladdress.get_name_leafdata());
    if (tcpconnectionlocalport.is_set || is_set(tcpconnectionlocalport.operation)) leaf_name_data.push_back(tcpconnectionlocalport.get_name_leafdata());
    if (tcpconnectionremaddresstype.is_set || is_set(tcpconnectionremaddresstype.operation)) leaf_name_data.push_back(tcpconnectionremaddresstype.get_name_leafdata());
    if (tcpconnectionremaddress.is_set || is_set(tcpconnectionremaddress.operation)) leaf_name_data.push_back(tcpconnectionremaddress.get_name_leafdata());
    if (tcpconnectionremport.is_set || is_set(tcpconnectionremport.operation)) leaf_name_data.push_back(tcpconnectionremport.get_name_leafdata());
    if (tcpconnectionprocess.is_set || is_set(tcpconnectionprocess.operation)) leaf_name_data.push_back(tcpconnectionprocess.get_name_leafdata());
    if (tcpconnectionstate.is_set || is_set(tcpconnectionstate.operation)) leaf_name_data.push_back(tcpconnectionstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TcpMib::Tcpconnectiontable::Tcpconnectionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpMib::Tcpconnectiontable::Tcpconnectionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpMib::Tcpconnectiontable::Tcpconnectionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcpConnectionLocalAddressType")
    {
        tcpconnectionlocaladdresstype = value;
    }
    if(value_path == "tcpConnectionLocalAddress")
    {
        tcpconnectionlocaladdress = value;
    }
    if(value_path == "tcpConnectionLocalPort")
    {
        tcpconnectionlocalport = value;
    }
    if(value_path == "tcpConnectionRemAddressType")
    {
        tcpconnectionremaddresstype = value;
    }
    if(value_path == "tcpConnectionRemAddress")
    {
        tcpconnectionremaddress = value;
    }
    if(value_path == "tcpConnectionRemPort")
    {
        tcpconnectionremport = value;
    }
    if(value_path == "tcpConnectionProcess")
    {
        tcpconnectionprocess = value;
    }
    if(value_path == "tcpConnectionState")
    {
        tcpconnectionstate = value;
    }
}

TcpMib::Tcplistenertable::Tcplistenertable()
{
    yang_name = "tcpListenerTable"; yang_parent_name = "TCP-MIB";
}

TcpMib::Tcplistenertable::~Tcplistenertable()
{
}

bool TcpMib::Tcplistenertable::has_data() const
{
    for (std::size_t index=0; index<tcplistenerentry.size(); index++)
    {
        if(tcplistenerentry[index]->has_data())
            return true;
    }
    return false;
}

bool TcpMib::Tcplistenertable::has_operation() const
{
    for (std::size_t index=0; index<tcplistenerentry.size(); index++)
    {
        if(tcplistenerentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpMib::Tcplistenertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpListenerTable";

    return path_buffer.str();

}

const EntityPath TcpMib::Tcplistenertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TCP-MIB:TCP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TcpMib::Tcplistenertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcpListenerEntry")
    {
        for(auto const & c : tcplistenerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TcpMib::Tcplistenertable::Tcplistenerentry>();
        c->parent = this;
        tcplistenerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpMib::Tcplistenertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tcplistenerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TcpMib::Tcplistenertable::set_value(const std::string & value_path, std::string value)
{
}

TcpMib::Tcplistenertable::Tcplistenerentry::Tcplistenerentry()
    :
    tcplistenerlocaladdresstype{YType::enumeration, "tcpListenerLocalAddressType"},
    tcplistenerlocaladdress{YType::str, "tcpListenerLocalAddress"},
    tcplistenerlocalport{YType::uint16, "tcpListenerLocalPort"},
    tcplistenerprocess{YType::uint32, "tcpListenerProcess"}
{
    yang_name = "tcpListenerEntry"; yang_parent_name = "tcpListenerTable";
}

TcpMib::Tcplistenertable::Tcplistenerentry::~Tcplistenerentry()
{
}

bool TcpMib::Tcplistenertable::Tcplistenerentry::has_data() const
{
    return tcplistenerlocaladdresstype.is_set
	|| tcplistenerlocaladdress.is_set
	|| tcplistenerlocalport.is_set
	|| tcplistenerprocess.is_set;
}

bool TcpMib::Tcplistenertable::Tcplistenerentry::has_operation() const
{
    return is_set(operation)
	|| is_set(tcplistenerlocaladdresstype.operation)
	|| is_set(tcplistenerlocaladdress.operation)
	|| is_set(tcplistenerlocalport.operation)
	|| is_set(tcplistenerprocess.operation);
}

std::string TcpMib::Tcplistenertable::Tcplistenerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpListenerEntry" <<"[tcpListenerLocalAddressType='" <<tcplistenerlocaladdresstype <<"']" <<"[tcpListenerLocalAddress='" <<tcplistenerlocaladdress <<"']" <<"[tcpListenerLocalPort='" <<tcplistenerlocalport <<"']";

    return path_buffer.str();

}

const EntityPath TcpMib::Tcplistenertable::Tcplistenerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TCP-MIB:TCP-MIB/tcpListenerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcplistenerlocaladdresstype.is_set || is_set(tcplistenerlocaladdresstype.operation)) leaf_name_data.push_back(tcplistenerlocaladdresstype.get_name_leafdata());
    if (tcplistenerlocaladdress.is_set || is_set(tcplistenerlocaladdress.operation)) leaf_name_data.push_back(tcplistenerlocaladdress.get_name_leafdata());
    if (tcplistenerlocalport.is_set || is_set(tcplistenerlocalport.operation)) leaf_name_data.push_back(tcplistenerlocalport.get_name_leafdata());
    if (tcplistenerprocess.is_set || is_set(tcplistenerprocess.operation)) leaf_name_data.push_back(tcplistenerprocess.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TcpMib::Tcplistenertable::Tcplistenerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcpMib::Tcplistenertable::Tcplistenerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TcpMib::Tcplistenertable::Tcplistenerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcpListenerLocalAddressType")
    {
        tcplistenerlocaladdresstype = value;
    }
    if(value_path == "tcpListenerLocalAddress")
    {
        tcplistenerlocaladdress = value;
    }
    if(value_path == "tcpListenerLocalPort")
    {
        tcplistenerlocalport = value;
    }
    if(value_path == "tcpListenerProcess")
    {
        tcplistenerprocess = value;
    }
}

const Enum::YLeaf TcpMib::Tcp::TcprtoalgorithmEnum::other {1, "other"};
const Enum::YLeaf TcpMib::Tcp::TcprtoalgorithmEnum::constant {2, "constant"};
const Enum::YLeaf TcpMib::Tcp::TcprtoalgorithmEnum::rsre {3, "rsre"};
const Enum::YLeaf TcpMib::Tcp::TcprtoalgorithmEnum::vanj {4, "vanj"};
const Enum::YLeaf TcpMib::Tcp::TcprtoalgorithmEnum::rfc2988 {5, "rfc2988"};

const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::closed {1, "closed"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::listen {2, "listen"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::synSent {3, "synSent"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::synReceived {4, "synReceived"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::established {5, "established"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::finWait1 {6, "finWait1"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::finWait2 {7, "finWait2"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::closeWait {8, "closeWait"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::lastAck {9, "lastAck"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::closing {10, "closing"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::timeWait {11, "timeWait"};
const Enum::YLeaf TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum::deleteTCB {12, "deleteTCB"};

const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::closed {1, "closed"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::listen {2, "listen"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::synSent {3, "synSent"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::synReceived {4, "synReceived"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::established {5, "established"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::finWait1 {6, "finWait1"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::finWait2 {7, "finWait2"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::closeWait {8, "closeWait"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::lastAck {9, "lastAck"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::closing {10, "closing"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::timeWait {11, "timeWait"};
const Enum::YLeaf TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum::deleteTCB {12, "deleteTCB"};


}
}

